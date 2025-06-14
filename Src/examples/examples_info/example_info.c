/*! ----------------------------------------------------------------------------
 * @file    example_info.h
 * @brief
 *
 * @attention
 *
 * Copyright 2013-2018(c) Decawave Ltd, Dublin, Ireland.
 *
 * All rights reserved.
 *
 */

#include <assert.h>
#include <example_selection.h>
#include "examples_defines.h"

example_ptr example_pointer;

void build_examples(void)
{
    unsigned char test_cnt=0;



#ifdef TEST_SIMPLE_TX
    extern int simple_tx(void);

    example_pointer=simple_tx;
    test_cnt++;
#endif


#ifdef TEST_SIMPLE_RX
    extern int simple_rx(void);

    example_pointer=simple_rx;
    test_cnt++;
#endif



#ifdef TEST_DS_TWR_INITIATOR
    extern int ds_twr_initiator(void);

    example_pointer=ds_twr_initiator;
    test_cnt++;
#endif

#ifdef TEST_DS_TWR_RESPONDER
    extern int ds_twr_responder(void);

    example_pointer=ds_twr_responder;
    test_cnt++;
#endif


    //Check that only 1 test was enabled in test_selection.h file
    assert(test_cnt==1);

}

