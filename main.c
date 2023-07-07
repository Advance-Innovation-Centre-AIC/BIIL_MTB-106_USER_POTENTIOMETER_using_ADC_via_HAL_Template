#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"


int main(void)
{
    cy_rslt_t result;
	cyhal_adc_t adc_obj;
	cyhal_adc_channel_t adc_chan_0_obj;
	uint32_t counter = 0;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    __enable_irq();

    /* Initialize retarget-io to use the debug UART port */
	result = cy_retarget_io_init(CYBSP_DEBUG_UART_TX, CYBSP_DEBUG_UART_RX, CY_RETARGET_IO_BAUDRATE);
	CY_ASSERT(result == CY_RSLT_SUCCESS);

	/* ADC conversion result. */
	int adc_out;

	/* Initialize ADC. The ADC block which can connect to pin 10[6] is selected */
	result = cyhal_adc_init(&adc_obj, P10_6, NULL);

	// ADC configuration structure
	const cyhal_adc_config_t ADCconfig ={
		.continuous_scanning = false,
		.resolution = 12,
		.average_count = 1,
		.average_mode_flags = 0,
		.ext_vref_mv = 0,
		.vneg = CYHAL_ADC_VNEG_VREF,
		.vref = CYHAL_ADC_REF_VDDA,
		.ext_vref = NC,
		.is_bypassed = false,
		.bypass_pin = NC
	};

	// Configure to use VDD as Vref
	result = cyhal_adc_configure(&adc_obj, &ADCconfig);

	/* Initialize ADC channel, allocate channel number 0 to pin 10[6] as this is the first channel initialized */
	const cyhal_adc_channel_config_t channel_config = { .enable_averaging = false, .min_acquisition_ns = 220, .enabled = true };
	result = cyhal_adc_channel_init_diff(&adc_chan_0_obj, &adc_obj, P10_6, CYHAL_ADC_VNEG, &channel_config);

    for (;;)
    {
    	/* Read the ADC conversion result for corresponding ADC channel. Repeat as necessary. */
		adc_out = cyhal_adc_read_uv(&adc_chan_0_obj);

		printf("ADC (24V) = %d\r\n", (int) ((adc_out*24)/3304866) );

		// For Serial Studio
		// printf("/*%d,%d*/\r\n", counter++, (int) ((adc_out*24)/3304866) );

		cyhal_system_delay_ms(100);
    }
}

/* [] END OF FILE */
