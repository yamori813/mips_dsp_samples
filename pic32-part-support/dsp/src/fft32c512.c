#include <dsplib_dsp.h>

const int32c fft32c512[256] =
{
	{ 0x7fffffff, 0x00000000 },
	{ 0x7ffd8859, 0xfe6de2e1 },
	{ 0x7ff62181, 0xfcdbd542 },
	{ 0x7fe9cbbe, 0xfb49e6a3 },
	{ 0x7fd8878c, 0xf9b82684 },
	{ 0x7fc25595, 0xf826a462 },
	{ 0x7fa736b3, 0xf6956fb7 },
	{ 0x7f872bf1, 0xf50497fb },
	{ 0x7f62368e, 0xf3742ca3 },
	{ 0x7f3857f4, 0xf1e43d1d },
	{ 0x7f0991c2, 0xf054d8d5 },
	{ 0x7ed5e5c5, 0xeec60f32 },
	{ 0x7e9d55fb, 0xed37ef92 },
	{ 0x7e5fe492, 0xebaa894f },
	{ 0x7e1d93e8, 0xea1debbc },
	{ 0x7dd6668d, 0xe8922622 },
	{ 0x7d8a5f3e, 0xe70747c4 },
	{ 0x7d3980eb, 0xe57d5fdb },
	{ 0x7ce3ceb0, 0xe3f47d96 },
	{ 0x7c894bdc, 0xe26cb01b },
	{ 0x7c29fbed, 0xe0e60686 },
	{ 0x7bc5e28e, 0xdf608fe4 },
	{ 0x7b5d039c, 0xdddc5b3b },
	{ 0x7aef6322, 0xdc597782 },
	{ 0x7a7d055a, 0xdad7f3a3 },
	{ 0x7a05eeac, 0xd957de7b },
	{ 0x798a23b0, 0xd7d946d9 },
	{ 0x7909a92b, 0xd65c3b7c },
	{ 0x78848412, 0xd4e0cb15 },
	{ 0x77fab987, 0xd3670446 },
	{ 0x776c4eda, 0xd1eef59f },
	{ 0x76d94987, 0xd078ad9f },
	{ 0x7641af3b, 0xcf043ab4 },
	{ 0x75a585ce, 0xcd91ab39 },
	{ 0x7504d344, 0xcc210d7a },
	{ 0x745f9dd0, 0xcab26faa },
	{ 0x73b5ebd0, 0xc945dfed },
	{ 0x7307c3cf, 0xc7db6c51 },
	{ 0x72552c83, 0xc67322cf },
	{ 0x719e2cd1, 0xc50d114a },
	{ 0x70e2cbc5, 0xc3a94591 },
	{ 0x70231098, 0xc247cd5b },
	{ 0x6f5f02b0, 0xc0e8b649 },
	{ 0x6e96a99b, 0xbf8c0de4 },
	{ 0x6dca0d13, 0xbe31e19c },
	{ 0x6cf934fa, 0xbcda3ecc },
	{ 0x6c24295f, 0xbb8532b1 },
	{ 0x6b4af277, 0xba32ca72 },
	{ 0x6a6d98a3, 0xb8e3131a },
	{ 0x698c246b, 0xb796199c },
	{ 0x68a69e80, 0xb64beace },
	{ 0x67bd0fbb, 0xb5049369 },
	{ 0x66cf811f, 0xb3c0200e },
	{ 0x65ddfbd2, 0xb27e9d3d },
	{ 0x64e88925, 0xb140175d },
	{ 0x63ef328e, 0xb0049ab4 },
	{ 0x62f201ab, 0xaecc336d },
	{ 0x61f1003e, 0xad96ed93 },
	{ 0x60ec382f, 0xac64d512 },
	{ 0x5fe3b38c, 0xab35f5b7 },
	{ 0x5ed77c88, 0xaa0a5b2f },
	{ 0x5dc79d7b, 0xa8e21108 },
	{ 0x5cb420df, 0xa7bd22ad },
	{ 0x5b9d1152, 0xa69b9b69 },
	{ 0x5a827999, 0xa57d8667 },
	{ 0x59646497, 0xa462eeae },
	{ 0x5842dd53, 0xa34bdf21 },
	{ 0x571deef8, 0xa2386285 },
	{ 0x55f5a4d1, 0xa1288378 },
	{ 0x54ca0a49, 0xa01c4c74 },
	{ 0x539b2aee, 0x9f13c7d1 },
	{ 0x5269126d, 0x9e0effc2 },
	{ 0x5133cc93, 0x9d0dfe55 },
	{ 0x4ffb654c, 0x9c10cd72 },
	{ 0x4ebfe8a3, 0x9b1776db },
	{ 0x4d8162c3, 0x9a22042e },
	{ 0x4c3fdff2, 0x99307ee1 },
	{ 0x4afb6c97, 0x9842f045 },
	{ 0x49b41532, 0x97596180 },
	{ 0x4869e664, 0x9673db95 },
	{ 0x471cece6, 0x9592675d },
	{ 0x45cd358e, 0x94b50d89 },
	{ 0x447acd4f, 0x93dbd6a1 },
	{ 0x4325c134, 0x9306cb06 },
	{ 0x41ce1e64, 0x9235f2ed },
	{ 0x4073f21c, 0x91695665 },
	{ 0x3f1749b7, 0x90a0fd50 },
	{ 0x3db832a5, 0x8fdcef68 },
	{ 0x3c56ba6f, 0x8f1d343b },
	{ 0x3af2eeb6, 0x8e61d32f },
	{ 0x398cdd31, 0x8daad37d },
	{ 0x382493af, 0x8cf83c31 },
	{ 0x36ba2013, 0x8c4a1430 },
	{ 0x354d9056, 0x8ba06230 },
	{ 0x33def286, 0x8afb2cbc },
	{ 0x326e54c7, 0x8a5a7a32 },
	{ 0x30fbc54c, 0x89be50c5 },
	{ 0x2f875261, 0x8926b679 },
	{ 0x2e110a61, 0x8893b126 },
	{ 0x2c98fbba, 0x88054679 },
	{ 0x2b1f34eb, 0x877b7bee },
	{ 0x29a3c484, 0x86f656d5 },
	{ 0x2826b927, 0x8675dc50 },
	{ 0x26a82185, 0x85fa1154 },
	{ 0x25280c5d, 0x8582faa6 },
	{ 0x23a6887e, 0x85109cde },
	{ 0x2223a4c5, 0x84a2fc64 },
	{ 0x209f701c, 0x843a1d72 },
	{ 0x1f19f97a, 0x83d60413 },
	{ 0x1d934fe5, 0x8376b424 },
	{ 0x1c0b826a, 0x831c3150 },
	{ 0x1a82a025, 0x82c67f15 },
	{ 0x18f8b83c, 0x8275a0c2 },
	{ 0x176dd9de, 0x82299973 },
	{ 0x15e21444, 0x81e26c18 },
	{ 0x145576b1, 0x81a01b6e },
	{ 0x12c8106e, 0x8162aa05 },
	{ 0x1139f0ce, 0x812a1a3b },
	{ 0x0fab272b, 0x80f66e3e },
	{ 0x0e1bc2e3, 0x80c7a80c },
	{ 0x0c8bd35d, 0x809dc972 },
	{ 0x0afb6805, 0x8078d40f },
	{ 0x096a9049, 0x8058c94d },
	{ 0x07d95b9e, 0x803daa6b },
	{ 0x0647d97c, 0x80277874 },
	{ 0x04b6195d, 0x80163442 },
	{ 0x03242abe, 0x8009de7f },
	{ 0x01921d1f, 0x800277a7 },
	{ 0x00000000, 0x80000001 },
	{ 0xfe6de2e1, 0x800277a7 },
	{ 0xfcdbd542, 0x8009de7f },
	{ 0xfb49e6a3, 0x80163442 },
	{ 0xf9b82684, 0x80277874 },
	{ 0xf826a462, 0x803daa6b },
	{ 0xf6956fb7, 0x8058c94d },
	{ 0xf50497fb, 0x8078d40f },
	{ 0xf3742ca3, 0x809dc972 },
	{ 0xf1e43d1d, 0x80c7a80c },
	{ 0xf054d8d5, 0x80f66e3e },
	{ 0xeec60f32, 0x812a1a3b },
	{ 0xed37ef92, 0x8162aa05 },
	{ 0xebaa894f, 0x81a01b6e },
	{ 0xea1debbc, 0x81e26c18 },
	{ 0xe8922622, 0x82299973 },
	{ 0xe70747c4, 0x8275a0c2 },
	{ 0xe57d5fdb, 0x82c67f15 },
	{ 0xe3f47d96, 0x831c3150 },
	{ 0xe26cb01b, 0x8376b424 },
	{ 0xe0e60686, 0x83d60413 },
	{ 0xdf608fe4, 0x843a1d72 },
	{ 0xdddc5b3b, 0x84a2fc64 },
	{ 0xdc597782, 0x85109cde },
	{ 0xdad7f3a3, 0x8582faa6 },
	{ 0xd957de7b, 0x85fa1154 },
	{ 0xd7d946d9, 0x8675dc50 },
	{ 0xd65c3b7c, 0x86f656d5 },
	{ 0xd4e0cb15, 0x877b7bee },
	{ 0xd3670446, 0x88054679 },
	{ 0xd1eef59f, 0x8893b126 },
	{ 0xd078ad9f, 0x8926b679 },
	{ 0xcf043ab4, 0x89be50c5 },
	{ 0xcd91ab39, 0x8a5a7a32 },
	{ 0xcc210d7a, 0x8afb2cbc },
	{ 0xcab26faa, 0x8ba06230 },
	{ 0xc945dfed, 0x8c4a1430 },
	{ 0xc7db6c51, 0x8cf83c31 },
	{ 0xc67322cf, 0x8daad37d },
	{ 0xc50d114a, 0x8e61d32f },
	{ 0xc3a94591, 0x8f1d343b },
	{ 0xc247cd5b, 0x8fdcef68 },
	{ 0xc0e8b649, 0x90a0fd50 },
	{ 0xbf8c0de4, 0x91695665 },
	{ 0xbe31e19c, 0x9235f2ed },
	{ 0xbcda3ecc, 0x9306cb06 },
	{ 0xbb8532b1, 0x93dbd6a1 },
	{ 0xba32ca72, 0x94b50d89 },
	{ 0xb8e3131a, 0x9592675d },
	{ 0xb796199c, 0x9673db95 },
	{ 0xb64beace, 0x97596180 },
	{ 0xb5049369, 0x9842f045 },
	{ 0xb3c0200e, 0x99307ee1 },
	{ 0xb27e9d3d, 0x9a22042e },
	{ 0xb140175d, 0x9b1776db },
	{ 0xb0049ab4, 0x9c10cd72 },
	{ 0xaecc336d, 0x9d0dfe55 },
	{ 0xad96ed93, 0x9e0effc2 },
	{ 0xac64d512, 0x9f13c7d1 },
	{ 0xab35f5b7, 0xa01c4c74 },
	{ 0xaa0a5b2f, 0xa1288378 },
	{ 0xa8e21108, 0xa2386285 },
	{ 0xa7bd22ad, 0xa34bdf21 },
	{ 0xa69b9b69, 0xa462eeae },
	{ 0xa57d8667, 0xa57d8667 },
	{ 0xa462eeae, 0xa69b9b69 },
	{ 0xa34bdf21, 0xa7bd22ad },
	{ 0xa2386285, 0xa8e21108 },
	{ 0xa1288378, 0xaa0a5b2f },
	{ 0xa01c4c74, 0xab35f5b7 },
	{ 0x9f13c7d1, 0xac64d512 },
	{ 0x9e0effc2, 0xad96ed93 },
	{ 0x9d0dfe55, 0xaecc336d },
	{ 0x9c10cd72, 0xb0049ab4 },
	{ 0x9b1776db, 0xb140175d },
	{ 0x9a22042e, 0xb27e9d3d },
	{ 0x99307ee1, 0xb3c0200e },
	{ 0x9842f045, 0xb5049369 },
	{ 0x97596180, 0xb64beace },
	{ 0x9673db95, 0xb796199c },
	{ 0x9592675d, 0xb8e3131a },
	{ 0x94b50d89, 0xba32ca72 },
	{ 0x93dbd6a1, 0xbb8532b1 },
	{ 0x9306cb06, 0xbcda3ecc },
	{ 0x9235f2ed, 0xbe31e19c },
	{ 0x91695665, 0xbf8c0de4 },
	{ 0x90a0fd50, 0xc0e8b649 },
	{ 0x8fdcef68, 0xc247cd5b },
	{ 0x8f1d343b, 0xc3a94591 },
	{ 0x8e61d32f, 0xc50d114a },
	{ 0x8daad37d, 0xc67322cf },
	{ 0x8cf83c31, 0xc7db6c51 },
	{ 0x8c4a1430, 0xc945dfed },
	{ 0x8ba06230, 0xcab26faa },
	{ 0x8afb2cbc, 0xcc210d7a },
	{ 0x8a5a7a32, 0xcd91ab39 },
	{ 0x89be50c5, 0xcf043ab4 },
	{ 0x8926b679, 0xd078ad9f },
	{ 0x8893b126, 0xd1eef59f },
	{ 0x88054679, 0xd3670446 },
	{ 0x877b7bee, 0xd4e0cb15 },
	{ 0x86f656d5, 0xd65c3b7c },
	{ 0x8675dc50, 0xd7d946d9 },
	{ 0x85fa1154, 0xd957de7b },
	{ 0x8582faa6, 0xdad7f3a3 },
	{ 0x85109cde, 0xdc597782 },
	{ 0x84a2fc64, 0xdddc5b3b },
	{ 0x843a1d72, 0xdf608fe4 },
	{ 0x83d60413, 0xe0e60686 },
	{ 0x8376b424, 0xe26cb01b },
	{ 0x831c3150, 0xe3f47d96 },
	{ 0x82c67f15, 0xe57d5fdb },
	{ 0x8275a0c2, 0xe70747c4 },
	{ 0x82299973, 0xe8922622 },
	{ 0x81e26c18, 0xea1debbc },
	{ 0x81a01b6e, 0xebaa894f },
	{ 0x8162aa05, 0xed37ef92 },
	{ 0x812a1a3b, 0xeec60f32 },
	{ 0x80f66e3e, 0xf054d8d5 },
	{ 0x80c7a80c, 0xf1e43d1d },
	{ 0x809dc972, 0xf3742ca3 },
	{ 0x8078d40f, 0xf50497fb },
	{ 0x8058c94d, 0xf6956fb7 },
	{ 0x803daa6b, 0xf826a462 },
	{ 0x80277874, 0xf9b82684 },
	{ 0x80163442, 0xfb49e6a3 },
	{ 0x8009de7f, 0xfcdbd542 },
	{ 0x800277a7, 0xfe6de2e1 },
};

