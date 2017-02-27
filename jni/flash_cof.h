//
// Data file FLASHER.COF - Sep  9 2005
//
// This program and associated binaries are copyright by Mike Brent, http://harmlesslion.com
// Commercial use prohibited. All rights reserved. Copyright 2008 by Mike Brent.
//

const unsigned char FLASH_COF[] = {
	0x01,0x50,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x08,0x00,0x00,0x00,0x0D,	// .P.............. //
	0x00,0x1C,0x00,0x03,0x00,0x00,0x01,0x07,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0x00,	// ...........`.... //
	0x00,0x00,0x00,0x50,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x04,0x60,	// ...P...........` //
	0x2E,0x74,0x65,0x78,0x74,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,	// .text........... //
	0x00,0x00,0x04,0x60,0x00,0x00,0x00,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// ...`............ //
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x2E,0x64,0x61,0x74,0x61,0x00,0x00,0x00,	// ....... .data... //
	0x00,0x08,0x04,0x60,0x00,0x08,0x04,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x08,	// ...`...`........ //
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,	// ...............@ //
	0x2E,0x62,0x73,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x40,0x00,	// .bss......@...@. //
	0x00,0x00,0x00,0x50,0x00,0x00,0x05,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// ...P............ //
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x23,0xFC,0x00,0x07,0x00,0x07,0x00,0xF0,	// ........#....... //
	0x21,0x0C,0x23,0xFC,0x00,0x07,0x00,0x07,0x00,0xF1,0xA1,0x0C,0x33,0xFC,0xFF,0xFF,	// !.#.........3... //
	0x00,0xF0,0x00,0x4E,0x2E,0x7C,0x00,0x1F,0xFF,0xFC,0x4E,0xB9,0x00,0x08,0x00,0xD8,	// ...N.|....N..... //
	0x33,0xFC,0x06,0xC7,0x00,0xF0,0x00,0x28,0x4E,0xF9,0x00,0x08,0x02,0x80,0x4E,0xB9,	// 3......(N.....N. //
	0x00,0x08,0x01,0x86,0x4E,0xB9,0x00,0x08,0x00,0xAA,0x23,0xFC,0x00,0x00,0x00,0x00,	// ....N.....#..... //
	0x00,0x00,0x40,0x20,0x23,0xFC,0x00,0x00,0x00,0x0C,0x00,0x00,0x40,0x24,0x23,0xC0,	// ..@ #.......@$#. //
	0x00,0x00,0x40,0x00,0x23,0xFC,0x00,0x08,0x00,0x8C,0x00,0xF0,0x21,0x10,0x23,0xFC,	// ..@.#.......!.#. //
	0x00,0x00,0x00,0x01,0x00,0xF0,0x21,0x14,0x20,0x39,0x00,0xF0,0x21,0x14,0x02,0x80,	// ......!. 9..!... //
	0x00,0x00,0x00,0x01,0x66,0xF2,0x33,0xFC,0x06,0xC1,0x00,0xF0,0x00,0x28,0x4E,0xF9,	// ....f.3......(N. //
	0x00,0x08,0x02,0x80,0x98,0x00,0x40,0x00,0x00,0x00,0xA4,0x01,0x98,0x00,0x00,0x20,	// ......@........  //
	0x00,0xF0,0xBC,0x01,0x8C,0x00,0x98,0x01,0x21,0x14,0x00,0xF0,0xBC,0x20,0xE4,0x00,	// ........!.... .. //
	0xE4,0x00,0x2F,0x00,0x21,0xFC,0x00,0x08,0x02,0x48,0x01,0x00,0x30,0x39,0x00,0x00,	// ../.!....H..09.. //
	0x40,0x4A,0x00,0x40,0x00,0x01,0x33,0xC0,0x00,0xF0,0x00,0x4E,0x33,0xFC,0x00,0x01,	// @J.@..3....N3... //
	0x00,0xF0,0x00,0xE0,0x40,0xC0,0xC0,0x7C,0xF8,0xFF,0x46,0xC0,0x20,0x1F,0x4E,0x75,	// ....@..|..F. .Nu //
	0x48,0xE7,0xFE,0x00,0x30,0x39,0x00,0xF1,0x40,0x02,0x02,0x40,0x00,0x10,0x67,0x00,	// H...09..@..@..g. //
	0x00,0x16,0x34,0x3C,0x03,0x37,0x30,0x3C,0x05,0x81,0x3C,0x3C,0x01,0x0A,0x38,0x3C,	// ..4<.70<..<<..8< //
	0x00,0xF1,0x60,0x00,0x00,0x12,0x34,0x3C,0x03,0x4B,0x30,0x3C,0x05,0x65,0x3C,0x3C,	// ..`...4<.K0<.e<< //
	0x01,0x42,0x38,0x3C,0x01,0x1F,0x33,0xC0,0x00,0x00,0x40,0x4C,0x33,0xC4,0x00,0x00,	// .B8<..3...@L3... //
	0x40,0x4E,0x32,0x00,0xE2,0x41,0x94,0x41,0xD4,0x7C,0x00,0x04,0x92,0x7C,0x00,0x01,	// @N2..A.A.|...|.. //
	0x00,0x41,0x04,0x00,0x33,0xC1,0x00,0x00,0x40,0x46,0x33,0xC1,0x00,0xF0,0x00,0x3C,	// .A..3...@F3....< //
	0x33,0xC2,0x00,0x00,0x40,0x44,0x33,0xC2,0x00,0xF0,0x00,0x38,0x33,0xC2,0x00,0xF0,	// 3...@D3....83... //
	0x00,0x3A,0x3A,0x06,0x9A,0x44,0x33,0xC5,0x00,0x00,0x40,0x48,0xDC,0x44,0x33,0xC6,	// .::..D3...@H.D3. //
	0x00,0x00,0x40,0x4A,0x33,0xF9,0x00,0x00,0x40,0x48,0x00,0xF0,0x00,0x46,0x33,0xFC,	// ..@J3...@H...F3. //
	0xFF,0xFF,0x00,0xF0,0x00,0x48,0x23,0xFC,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x2A,	// .....H#........* //
	0x33,0xFC,0x00,0x00,0x00,0xF0,0x00,0x58,0x4C,0xDF,0x00,0x7F,0x4E,0x75,0x48,0xE7,	// 3......XL...NuH. //
	0x78,0x80,0x41,0xF9,0x00,0x00,0x40,0x10,0x24,0x08,0xD4,0xBC,0x00,0x00,0x00,0x20,	// x.A...@.$......  //
	0x26,0x02,0xE0,0x8A,0xE6,0x8A,0x48,0x43,0x42,0x43,0xEB,0x8B,0x42,0x80,0x22,0x3C,	// &.....HCBC..B."< //
	0x00,0x00,0x80,0x03,0x80,0x82,0x82,0x83,0x38,0x39,0x00,0x00,0x40,0x4A,0xE7,0x4C,	// ........89..@J.L //
	0x82,0x44,0x20,0xC0,0x20,0xC1,0x02,0x81,0xFF,0x00,0x00,0x07,0x00,0x81,0x00,0x00,	// .D . ........... //
	0x40,0x00,0x38,0x39,0x00,0x00,0x40,0x48,0xE7,0x4C,0x82,0x44,0x20,0xC0,0x20,0xC1,	// @.89..@H.L.D . . //
	0x20,0x02,0x22,0x03,0x00,0x81,0x00,0x0C,0x00,0x00,0x38,0x39,0x00,0x00,0x40,0x4E,	//  .".......89..@N //
	0x98,0x7C,0x00,0x30,0xD8,0x79,0x00,0x00,0x40,0x48,0x02,0x44,0xFF,0xFE,0xE7,0x4C,	// .|.0.y..@H.D...L //
	0x82,0x44,0x28,0x3C,0x00,0x08,0x04,0x60,0xE1,0x8C,0x80,0x84,0x20,0xC0,0x20,0xC1,	// .D(<...`.... . . //
	0x48,0xF9,0x00,0x03,0x00,0x00,0x40,0x38,0x70,0x03,0x22,0x3C,0x00,0x00,0xC0,0x00,	// H.....@8p."<.... //
	0x38,0x39,0x00,0x00,0x40,0x4C,0xE4,0x4C,0x98,0x7C,0x00,0xC0,0xE2,0x4C,0x82,0x44,	// 89..@L.L.|...L.D //
	0x00,0x81,0x00,0xC0,0x00,0x00,0x20,0xC0,0x20,0xC1,0x42,0x98,0x20,0xFC,0x00,0x00,	// ...... . .B. ... //
	0x00,0x0C,0x20,0x3C,0x00,0x00,0x40,0x10,0x48,0x40,0x4C,0xDF,0x01,0x1E,0x4E,0x75,	// .. <..@.H@L...Nu //
	0x2F,0x08,0x20,0x7C,0x00,0x00,0x40,0x20,0x20,0xB9,0x00,0x00,0x40,0x38,0x21,0x79,	// /. |..@  ...@8!y //
	0x00,0x00,0x40,0x3C,0x00,0x04,0x06,0xB9,0x00,0x00,0x00,0x01,0x00,0x00,0x40,0x40,	// ..@<..........@@ //
	0x33,0xFC,0x01,0x01,0x00,0xF0,0x00,0xE0,0x33,0xFC,0x00,0x00,0x00,0xF0,0x00,0xE2,	// 3.......3....... //
	0x20,0x5F,0x4E,0x73,0x00,0x00,0x00,0x00,0x2C,0x3C,0x00,0x00,0x01,0xC0,0x26,0x7C,	//  _Ns....,<....&| //
	0x00,0x80,0x00,0x01,0x28,0x7C,0x00,0xC0,0x00,0x00,0x2A,0x7C,0x00,0x80,0x00,0x00,	// ....(|....*|.... //
	0x38,0xBC,0x40,0x04,0x38,0xBC,0x27,0xEA,0x3A,0xBC,0x00,0x00,0x38,0xBC,0x37,0xEA,	// 8.@.8.'.:...8.7. //
	0x3A,0xBC,0x00,0x00,0x38,0xBC,0x40,0x01,0x20,0x7C,0x00,0x80,0x20,0x00,0x4E,0xB9,	// :...8.@. |.. .N. //
	0x00,0x08,0x03,0xF8,0x20,0x7C,0x00,0x88,0x00,0x00,0x4E,0xB9,0x00,0x08,0x03,0xF8,	// .... |....N..... //
	0x20,0x7C,0x00,0x88,0x20,0x00,0x4E,0xB9,0x00,0x08,0x03,0xF8,0x20,0x7C,0x00,0x90,	//  |.. .N..... |.. //
	0x00,0x00,0x4E,0xB9,0x00,0x08,0x03,0xF8,0x20,0x7C,0x00,0x90,0x20,0x00,0x4E,0xB9,	// ..N..... |.. .N. //
	0x00,0x08,0x03,0xF8,0x20,0x7C,0x00,0x98,0x00,0x00,0x4E,0xB9,0x00,0x08,0x03,0xF8,	// .... |....N..... //
	0x20,0x7C,0x00,0x98,0x20,0x00,0x4E,0xB9,0x00,0x08,0x03,0xF8,0x72,0x3E,0x20,0x7C,	//  |.. .N.....r> | //
	0x00,0x98,0x40,0x00,0x4E,0xB9,0x00,0x08,0x03,0xF8,0xD1,0xFC,0x00,0x00,0x40,0x00,	// ..@.N.........@. //
	0x51,0xC9,0xFF,0xF2,0x38,0xBC,0x40,0x04,0x38,0xBC,0x27,0xEA,0x3A,0xBC,0xFF,0xFF,	// Q...8.@.8.'.:... //
	0x38,0xBC,0x37,0xEA,0x3A,0xBC,0xFF,0xFF,0x38,0x3C,0x37,0xEA,0x38,0x84,0x32,0x14,	// 8.7.:...8<7.8.2. //
	0x02,0x41,0xFF,0x00,0xB2,0x7C,0xFF,0x00,0x67,0xF2,0x38,0xBC,0x40,0x00,0x98,0x7C,	// .A...|..g.8.@..| //
	0x00,0x0A,0x38,0x84,0x20,0x54,0x24,0x54,0x36,0x14,0x32,0x14,0x52,0x41,0xE2,0x49,	// ..8. T$T6.2.RA.I //
	0x53,0x41,0x02,0x41,0x07,0xFF,0x3A,0x01,0x26,0x48,0x98,0x7C,0x0F,0xE0,0x38,0x84,	// SA.A..:.&H.|..8. //
	0x33,0xFC,0xFF,0xFF,0x00,0xF0,0x00,0x58,0x30,0x3C,0x00,0x08,0x34,0x3C,0x81,0x00,	// 3......X0<..4<.. //
	0x3E,0x14,0x33,0xFC,0x00,0x00,0x00,0xF0,0x00,0x58,0x4E,0xF9,0x00,0x08,0x03,0x90,	// >.3......XN..... //
	0x3E,0x14,0x50,0x40,0xC0,0x50,0x67,0xFA,0x30,0x82,0x30,0xC7,0x51,0xC9,0xFF,0xF2,	// >.P@.Pg.0.0.Q... //
	0x33,0xC6,0x00,0xF0,0x00,0x58,0x3C,0x39,0x00,0xF0,0x00,0x06,0xEF,0x46,0x00,0x46,	// 3....X<9.....F.F //
	0x00,0xC0,0x3A,0x10,0x33,0xFC,0x00,0x00,0x00,0xF0,0x00,0x58,0xCA,0x40,0x67,0xE0,	// ..:.3......X.@g. //
	0x33,0xFC,0xD5,0x99,0x00,0x80,0x00,0x00,0xD8,0x7C,0x0F,0xEA,0x38,0xBC,0x40,0x04,	// 3........|..8.@. //
	0x38,0x84,0x3A,0xBC,0xFF,0xFF,0x28,0x03,0xD8,0x7C,0x0F,0xEA,0x33,0xFC,0x00,0x00,	// 8.:...(..|..3... //
	0x00,0xF0,0x00,0x58,0xB5,0xFC,0xFF,0xFF,0xFF,0xFF,0x67,0x00,0xFF,0x50,0x33,0xFC,	// ...X......g..P3. //
	0x55,0x12,0x00,0xF0,0x00,0x58,0x38,0xBC,0x40,0x01,0x4E,0xF9,0x00,0x08,0x03,0xF2,	// U....X8.@.N..... //
	0x38,0xBC,0x40,0x00,0x30,0xBC,0x85,0x00,0x30,0xBC,0x81,0x80,0x30,0xBC,0x85,0x08,	// 8.@.0...0...0... //
	0x30,0xBC,0x80,0x80,0x30,0xBC,0x85,0x08,0x33,0xC6,0x00,0xF0,0x00,0x58,0x3C,0x39,	// 0...0...3....X<9 //
	0x00,0xF0,0x00,0x06,0xEF,0x46,0x00,0x46,0x00,0xC0,0x30,0x39,0x00,0x80,0x00,0x00,	// .....F.F..09.... //
	0x33,0xFC,0x00,0x00,0x00,0xF0,0x00,0x58,0xC0,0x7C,0x00,0x08,0x67,0xDA,0xB0,0x7C,	// 3......X.|..g..| //
	0x00,0x08,0x66,0x00,0x00,0x10,0x33,0xFC,0x00,0x00,0x00,0xF0,0x00,0x58,0x38,0xBC,	// ..f...3......X8. //
	0x40,0x01,0x4E,0x75,0x38,0xBC,0x40,0x01,0x4E,0xF9,0x00,0x80,0x08,0x00,0x00,0x00,	// @.Nu8.@.N....... //
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x05,0x00,0x00,0x00,	// ................ //
	0x00,0x08,0x04,0x60,0x00,0x00,0x00,0x0C,0x07,0x00,0x00,0x00,0x00,0x08,0x04,0x60,	// ...`...........` //
	0x00,0x00,0x00,0x14,0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x50,0x00,0x00,0x00,0x1B,	// ..........@P.... //
	0x05,0x00,0x00,0x00,0x00,0x08,0x00,0x8C,0x00,0x00,0x00,0x23,0x09,0x00,0x00,0x00,	// ...........#.... //
	0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x2B,0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x40,	// ..@....+......@@ //
	0x00,0x00,0x00,0x31,0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x44,0x00,0x00,0x00,0x37,	// ...1......@D...7 //
	0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x46,0x00,0x00,0x00,0x3D,0x09,0x00,0x00,0x00,	// ......@F...=.... //
	0x00,0x00,0x40,0x48,0x00,0x00,0x00,0x43,0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x4A,	// ..@H...C......@J //
	0x00,0x00,0x00,0x49,0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x4C,0x00,0x00,0x00,0x4F,	// ...I......@L...O //
	0x09,0x00,0x00,0x00,0x00,0x00,0x40,0x4E,0x00,0x00,0x00,0x56,0x05,0x00,0x00,0x00,	// ......@N...V.... //
	0x00,0x08,0x02,0x80,0x00,0x00,0x00,0x5D,0x5F,0x54,0x45,0x58,0x54,0x5F,0x45,0x00,	// .......]_TEXT_E. //
	0x5F,0x44,0x41,0x54,0x41,0x5F,0x45,0x00,0x5F,0x42,0x53,0x53,0x5F,0x45,0x00,0x67,	// _DATA_E._BSS_E.g //
	0x53,0x65,0x74,0x4F,0x4C,0x50,0x00,0x6F,0x6C,0x70,0x32,0x73,0x65,0x74,0x00,0x74,	// SetOLP.olp2set.t //
	0x69,0x63,0x6B,0x73,0x00,0x61,0x5F,0x68,0x64,0x62,0x00,0x61,0x5F,0x68,0x64,0x65,	// icks.a_hdb.a_hde //
	0x00,0x61,0x5F,0x76,0x64,0x62,0x00,0x61,0x5F,0x76,0x64,0x65,0x00,0x77,0x69,0x64,	// .a_vdb.a_vde.wid //
	0x74,0x68,0x00,0x68,0x65,0x69,0x67,0x68,0x74,0x00,0x5F,0x73,0x74,0x61,0x72,0x74,	// th.height._start //
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// ................ //
};

// Size of data in above array (Array may be padded but this will be correct)
#define SIZE_OF_FLASH_COF 1537
