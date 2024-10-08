#ifndef INPUT_SMALL_SCALE_D8_H
#define INPUT_SMALL_SCALE_D8_H

//D2T20 instance
#ifdef D2T20

    //Number of periods of the network activity (T)
    const unsigned short T = 20;

    //Maximum demand
    const unsigned short DEMANDA_MAX =  8;

    //Initial node demand and period (i,t)
    const unsigned short source_demanda[8][2] = { 
        {27,0},
        {28,0},
        {63,0},
        //{72,0}, (sem conexão)
        {76,0},
        {29,1},
        {15,2},
        {64,2},
        //{89,4}, (sem conexão)
        {91,5}
    };
    
    //Define shortest paths for all demand nodes
    const unsigned short min_paths[8][100][16] = { 
    {
        {27,5, 8, 0},
        {27,37,8, 0},
        {27,64,8, 0}
    },
    {
        {28,24,8,0},
        {28,24,67,0},
        {28,24,87,0},
        {28,31,8,0},
        {28,31,67,0},
        {28,31,87,0},
        {28,40,96,0}
    },
    {
        {63,4,17,96,0}
    },
    {
        {76,14,77,28,24,8,0},
        {76,14,77,28,24,67,0},
        {76,14,77,28,24,87,0},
        {76,14,77,28,31,8,0},
        {76,14,77,28,31,67,0},
        {76,14,77,28,31,87,0},
        {76,14,77,28,40,96,0},
        {76,14,91,28,24,8,0},
        {76,14,91,28,24,67,0},
        {76,14,91,28,24,87,0},
        {76,14,91,28,31,8,0},
        {76,14,91,28,31,67,0},
        {76,14,91,28,31,87,0},
        {76,14,91,28,40,96,0}
    },
    {
        {29,32,34,0},
        {29,32,38,0},
        {29,32,50,0},
        {29,32,57,0},
        {29,49,57,0},
        {29,51,57,0},
        {29,65,57,0},
        {29,70,57,0},
        {29,81,57,0},
        {29,90,57,0}
    },
    {
        {15,96,0}
    },
    {
        {64,8,0}
    },
    {
        {91,28,24,8,0},
        {91,28,24,67,0},
        {91,28,24,87,0},
        {91,28,31,8,0},
        {91,28,31,67,0},
        {91,28,31,87,0},
        {91,28,40,96,0}
    }
    };

    //Define the number of shortest paths    
    const unsigned short min_paths_size[8] = {3,7,1,14,10,1,1,7};
    
#endif
#endif /* INPUT_SMALL_SCALE_D8_H */

