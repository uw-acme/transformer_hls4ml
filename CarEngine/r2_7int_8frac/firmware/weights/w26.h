//Numpy array shape [32, 16]
//Min -0.500000000000
//Max 0.750000000000
//Number of zeros 172

#ifndef W26_H_
#define W26_H_

#ifndef __SYNTHESIS__
weight26_t w26[512];
#else
weight26_t w26[512] = {-0.25, 0.00, 0.00, 0.00, 0.25, 0.00, -0.25, 0.00, 0.00, 0.00, 0.25, -0.25, 0.25, -0.25, -0.25, -0.25, 0.00, 0.00, -0.50, -0.25, 0.25, -0.25, 0.00, 0.25, 0.25, 0.25, -0.50, 0.25, 0.25, -0.25, -0.50, 0.00, -0.25, 0.25, -0.25, 0.00, 0.25, 0.00, 0.50, -0.25, -0.50, -0.25, 0.25, 0.00, -0.25, 0.00, 0.00, 0.50, -0.25, -0.25, -0.50, 0.50, -0.25, 0.50, -0.25, 0.00, 0.00, -0.50, 0.00, 0.25, -0.25, 0.00, 0.00, -0.25, 0.00, 0.00, -0.25, 0.00, 0.25, 0.00, 0.25, 0.25, 0.75, -0.25, 0.25, 0.00, 0.00, 0.00, 0.25, 0.00, 0.00, 0.25, -0.25, 0.00, 0.00, 0.25, -0.25, -0.25, 0.50, -0.25, 0.25, 0.25, -0.25, 0.00, -0.25, 0.75, 0.25, -0.25, -0.50, -0.50, 0.00, -0.25, -0.25, 0.00, 0.00, 0.50, 0.00, -0.25, 0.00, 0.50, -0.50, 0.00, -0.25, 0.00, -0.25, 0.00, -0.25, -0.25, 0.00, 0.25, -0.25, -0.25, -0.25, 0.00, 0.50, 0.00, 0.25, 0.00, -0.25, -0.25, -0.25, -0.25, 0.50, -0.25, 0.25, -0.50, 0.25, 0.00, 0.00, 0.00, -0.25, 0.00, -0.25, 0.25, 0.00, -0.50, 0.25, 0.25, 0.00, 0.25, 0.25, 0.25, 0.25, 0.25, -0.25, -0.25, 0.50, 0.25, 0.25, 0.00, 0.00, -0.25, 0.25, 0.25, 0.50, -0.25, 0.25, 0.50, 0.00, -0.25, 0.50, 0.50, -0.25, 0.00, 0.50, 0.25, -0.25, 0.75, 0.25, 0.00, 0.00, -0.25, -0.25, -0.25, -0.25, -0.25, 0.25, 0.25, 0.00, -0.25, -0.25, -0.25, 0.00, -0.25, -0.25, -0.25, 0.00, -0.25, -0.25, 0.25, 0.00, -0.50, -0.25, 0.25, 0.00, -0.50, 0.25, 0.00, -0.50, 0.25, 0.00, -0.25, 0.00, -0.25, -0.25, -0.25, 0.00, -0.25, 0.00, 0.00, -0.25, -0.50, -0.50, 0.00, 0.00, 0.25, -0.25, -0.25, -0.25, 0.25, -0.25, -0.25, -0.25, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, -0.25, 0.25, 0.00, 0.00, -0.25, -0.25, -0.25, 0.25, 0.25, -0.25, 0.00, -0.25, -0.25, 0.25, 0.00, 0.25, -0.25, -0.25, -0.25, 0.00, 0.00, 0.25, -0.25, 0.00, 0.00, 0.00, -0.25, 0.00, 0.50, 0.25, 0.00, 0.25, 0.50, 0.00, 0.50, 0.25, 0.00, 0.25, 0.50, 0.00, 0.00, 0.00, 0.00, 0.25, 0.00, 0.00, 0.00, 0.00, 0.25, -0.25, 0.00, -0.25, -0.25, -0.25, 0.50, -0.25, 0.00, -0.50, -0.25, -0.25, 0.00, 0.00, -0.25, -0.25, 0.00, 0.00, 0.25, -0.25, 0.00, 0.00, 0.00, 0.00, 0.50, 0.00, 0.50, -0.25, 0.00, -0.25, 0.00, -0.50, -0.25, 0.00, 0.25, 0.00, 0.00, -0.50, 0.25, 0.00, -0.50, -0.25, 0.25, -0.25, 0.00, 0.25, 0.25, -0.50, -0.50, 0.25, 0.00, 0.00, 0.00, 0.00, -0.25, 0.25, -0.25, -0.50, 0.25, -0.25, -0.25, 0.25, 0.00, 0.25, -0.50, 0.00, -0.25, 0.00, -0.25, 0.25, 0.00, -0.25, -0.50, 0.25, -0.25, 0.00, 0.00, 0.00, -0.25, 0.00, 0.25, -0.50, 0.00, 0.00, -0.25, 0.50, 0.00, -0.25, -0.25, 0.00, 0.00, 0.00, -0.25, 0.25, -0.25, 0.25, -0.25, 0.00, -0.25, -0.25, 0.00, -0.25, -0.25, -0.25, -0.25, 0.25, 0.00, 0.00, 0.25, 0.00, 0.25, -0.50, 0.00, 0.25, 0.00, -0.25, -0.25, 0.00, -0.25, 0.00, 0.00, 0.00, 0.25, -0.25, 0.00, -0.25, 0.50, 0.25, 0.00, -0.25, -0.25, 0.00, -0.25, 0.25, -0.25, 0.25, -0.25, 0.50, -0.25, -0.25, 0.00, 0.25, 0.00, 0.00, 0.25, 0.00, 0.50, -0.25, 0.00, 0.25, 0.00, 0.00, -0.25, 0.25, 0.00, 0.25, 0.25, 0.00, -0.25, 0.00, 0.50, -0.25, -0.25, 0.50, 0.25, 0.50, -0.25, -0.25, 0.50, 0.75, -0.25, 0.25, 0.50, 0.00, 0.00, 0.25, 0.25, -0.25, -0.25, -0.25, -0.25, -0.25, 0.75, -0.25, 0.00, 0.50, 0.00, 0.25, 0.50, 0.00, -0.25, -0.25, 0.00, 0.25, 0.25, -0.25, 0.25, 0.00, -0.25, -0.25, 0.25, 0.00, 0.25, -0.50, 0.00, 0.00, 0.00, 0.00, -0.25, 0.50, -0.50, 0.50, -0.25, -0.25, -0.25, -0.25, -0.25, 0.25, 0.00, 0.00, 0.00, -0.25, 0.25, -0.25, -0.25};
#endif

#endif