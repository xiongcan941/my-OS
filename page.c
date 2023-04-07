#include "page.h"
#include "interrupt.h"
#include "monitor.h"

void page_fault_handler(isr_params_t params){
	monitor_printf("page fault~\n");
}
