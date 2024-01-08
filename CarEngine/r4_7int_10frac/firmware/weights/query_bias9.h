//Numpy array shape [3, 16]
//Min -0.136648178101
//Max 0.136648178101
//Number of zeros 6

#ifndef QUERY_BIAS9_H_
#define QUERY_BIAS9_H_

#ifndef __SYNTHESIS__
q_multi_head_attention_16_default_t query_bias9[48];
#else
q_multi_head_attention_16_default_t query_bias9[48] = {0.1017176360, 0.0000000000, -0.1017165482, 0.1218123809, -0.1017176360, 0.1017176360, 0.0313600041, -0.1178203076, 0.1017165482, -0.1017165482, 0.1017165482, 0.0000000000, 0.1017165482, -0.0814284831, -0.0137291420, 0.0000000000, 0.1366446614, -0.1366481781, -0.0623114705, 0.1366446614, -0.1366481781, -0.1366481781, -0.1366481781, -0.1366481781, -0.1366446614, 0.1366446614, 0.1366446614, 0.1366481781, 0.0000000000, 0.1366446614, 0.1366481781, -0.0741227046, 0.0079351338, 0.0877350196, -0.0877350196, -0.0877350196, -0.0877356976, 0.0877350196, 0.0877356976, 0.0877350196, 0.0197930075, 0.0883964002, 0.0000000000, 0.0877356976, -0.0877356976, 0.0000000000, 0.0877350196, -0.0877350196};
#endif

#endif