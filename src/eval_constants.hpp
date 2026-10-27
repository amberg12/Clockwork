#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(113, 294);
inline const PParam KNIGHT_MAT = S(572, 1082);
inline const PParam BISHOP_MAT = S(520, 1020);
inline const PParam ROOK_MAT   = S(396, 1090);
inline const PParam QUEEN_MAT  = S(860, 1882);

inline const PParam TEMPO_VAL  = S(72, 60);

inline const PParam BISHOP_XRAY_PAWNS   = S(-14, -4);
inline const PParam BISHOP_PAIR_VAL   = S(63, 242);
inline const PParam ROOK_OPEN_VAL     = S(115, -6);
inline const PParam ROOK_SEMIOPEN_VAL = S(48, 10);
inline const PParam MINOR_BEHIND_PAWN = S(16, 44);
inline const PParam RESTRICTED_SQUARES = S(20, 5);
inline const PParam SPACE_VAL = S(95, -107);

inline const PParam DOUBLED_PAWN_VAL = S(-18, -103);
inline const PParam ISOLATED_PAWN_VAL = S(-21, -58);
inline const PParam OPPOSED_WEAK_PAWN_VAL = S(15, 36);

inline const PParam POTENTIAL_CHECKER_VAL = S(-43, -50);
inline const PParam OUTPOST_KNIGHT_VAL    = S(50, 45);
inline const PParam OUTPOST_BISHOP_VAL    = S(43, 44);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(38, 52);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(42, 0);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(19, 66);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(63, -55);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, -11), S(40, 25), S(50, 77), S(115, 220), S(385, 451), S(798, 1031),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(55, 25), S(41, 23), S(40, 72), S(87, 179), S(381, 127),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-73, -186), S(-74, -147), S(-40, -21), S(9, 99), S(96, 329), S(236, 547),
};
inline const std::array<PParam, 6> PASSED_CLEAR_STOPPERS = {
    S(-59, 48), S(-70, 27), S(-43, 89), S(-78, 209), S(-29, 286), S(87, 184),
};
inline const std::array<PParam, 6> PASSED_CLEAR_FORWARD = {
    S(2, 53), S(-5, 45), S(-56, 100), S(-7, 106), S(109, 98), S(41, 187),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(22, -38), S(18, 5), S(11, 38), S(23, 95), S(88, 235), S(396, 155),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(7, -21), S(-2, 18), S(-8, -21), S(-6, -66), S(-22, -161), S(-191, -448),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(14, 183), S(-1, 135), S(-6, 59), S(4, 20), S(18, 20), S(55, 11), S(62, -16),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-135, -43), S(-4, -12), S(-11, 77), S(24, 113), S(37, 149), S(44, 160), S(30, 136),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(51, -30), S(130, 237), S(161, 362), S(181, 417), S(204, 455), S(218, 497), S(238, 503), S(257, 508), S(277, 461),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(93, 25), S(155, 263), S(209, 353), S(227, 427), S(243, 479), S(254, 517), S(259, 544), S(260, 568), S(263, 580), S(268, 589), S(281, 577), S(282, 572), S(285, 579), S(245, 540),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(327, 401), S(240, 618), S(262, 651), S(278, 672), S(289, 693), S(292, 708), S(296, 726), S(300, 736), S(304, 748), S(309, 759), S(312, 769), S(310, 780), S(312, 786), S(318, 772), S(332, 740),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(441, 501), S(564, 768), S(589, 918), S(608, 1071), S(628, 1112), S(636, 1163), S(640, 1213), S(642, 1241), S(645, 1271), S(648, 1289), S(651, 1303), S(657, 1307), S(659, 1317), S(665, 1315), S(665, 1321), S(668, 1319), S(663, 1324), S(666, 1310), S(665, 1309), S(675, 1295), S(657, 1295), S(680, 1254), S(641, 1291), S(593, 1291), S(558, 1281), S(518, 1306), S(449, 1362), S(485, 1278),
};

inline const PParam PAWN_THREAT_KNIGHT = S(206, 168);
inline const PParam PAWN_THREAT_BISHOP = S(168, 248);
inline const PParam PAWN_THREAT_ROOK   = S(197, 150);
inline const PParam PAWN_THREAT_QUEEN  = S(161, 22);

inline const std::array<std::array<PParam, 5>, 2> MINOR_THREAT = {{
  {{ S(9, 58), S(98, 103), S(102, 131), S(183, 91), S(170, 26), }},
  {{ S(6, 61), S(89, 92), S(102, 124), S(207, 635), S(163, -69), }},
}};
inline const std::array<std::array<PParam, 5>, 2> ROOK_THREAT = {{
  {{ S(7, 67), S(47, 117), S(65, 111), S(17, 20), S(162, -72), }},
  {{ S(-3, 56), S(65, 81), S(104, 68), S(15, 11), S(205, 1227), }},
}};
inline const PParam KING_THREAT  = S(21, 125);
inline const PParam HANGING_PAWN  = S(32, 91);
inline const PParam HANGING_NON_PAWN  = S(73, 29);

inline const std::array<PParam, 2> KNIGHT_ON_QUEEN = {
    S(19, -4), S(40, -12),
};
inline const std::array<PParam, 2> BISHOP_ON_QUEEN = {
    S(50, 36), S(120, -123),
};
inline const std::array<PParam, 2> ROOK_ON_QUEEN = {
    S(42, 7), S(48, -3),
};

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(6, -21), S(6, -18), S(1, -24), S(-5, -32), S(-11, -39), S(-17, -43), S(-19, -55), S(-25, -52), S(-25, -100),
};

inline const PParam ROOK_LINEUP = S(19, 81);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(300, 466),    S(175, 576),    S(172, 452),    S(257, 501),    S(256, 438),    S(225, 473),    S(226, 485),    S(322, 427),    //
    S(131, 300),    S(126, 347),    S(99, 315),     S(104, 256),    S(99, 215),     S(76, 241),     S(85, 283),     S(66, 304),     //
    S(123, 250),    S(87, 277),     S(95, 266),     S(77, 201),     S(64, 186),     S(55, 210),     S(38, 220),     S(44, 255),     //
    S(78, 187),     S(46, 224),     S(64, 212),     S(58, 159),     S(39, 148),     S(33, 185),     S(-3, 198),     S(2, 203),      //
    S(63, 148),     S(96, 148),     S(71, 227),     S(67, 185),     S(46, 177),     S(20, 188),     S(-7, 189),     S(-12, 186),    //
    S(88, 170),     S(165, 141),    S(157, 166),    S(120, 202),    S(93, 181),     S(64, 181),     S(26, 197),     S(13, 199),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-171, -318),  S(-167, 278),   S(-181, 331),   S(122, 276),    S(22, 281),     S(-205, 345),   S(-242, 317),   S(-261, -233),  //
    S(99, 217),     S(87, 254),     S(184, 236),    S(182, 315),    S(200, 283),    S(153, 249),    S(89, 237),     S(46, 239),     //
    S(131, 196),    S(132, 264),    S(137, 299),    S(164, 324),    S(152, 319),    S(111, 293),    S(93, 267),     S(52, 229),     //
    S(182, 256),    S(179, 293),    S(185, 318),    S(193, 361),    S(198, 344),    S(164, 304),    S(145, 252),    S(119, 259),    //
    S(171, 239),    S(192, 229),    S(197, 276),    S(183, 321),    S(181, 304),    S(162, 288),    S(153, 233),    S(119, 225),    //
    S(115, 157),    S(140, 177),    S(144, 236),    S(153, 280),    S(151, 272),    S(125, 227),    S(110, 189),    S(70, 155),     //
    S(134, 171),    S(125, 208),    S(122, 178),    S(132, 217),    S(128, 213),    S(99, 162),     S(55, 212),     S(41, 113),     //
    S(45, 104),     S(108, 159),    S(120, 162),    S(134, 180),    S(121, 183),    S(79, 153),     S(67, 181),     S(7, 65),       //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(73, 330),     S(-45, 476),    S(-225, 552),   S(-96, 471),    S(-113, 504),   S(-83, 501),    S(-15, 464),    S(35, 443),     //
    S(143, 334),    S(105, 454),    S(121, 431),    S(116, 435),    S(122, 438),    S(145, 397),    S(161, 394),    S(121, 369),    //
    S(219, 369),    S(194, 405),    S(207, 423),    S(201, 418),    S(203, 401),    S(198, 404),    S(174, 402),    S(200, 335),    //
    S(186, 349),    S(225, 388),    S(242, 392),    S(261, 426),    S(274, 417),    S(221, 380),    S(216, 363),    S(177, 342),    //
    S(211, 320),    S(215, 363),    S(251, 371),    S(268, 393),    S(258, 391),    S(243, 379),    S(196, 361),    S(181, 320),    //
    S(230, 332),    S(255, 329),    S(270, 354),    S(241, 391),    S(238, 369),    S(234, 367),    S(237, 348),    S(199, 322),    //
    S(204, 279),    S(297, 270),    S(237, 328),    S(224, 343),    S(211, 338),    S(223, 301),    S(229, 282),    S(211, 311),    //
    S(210, 286),    S(199, 324),    S(205, 339),    S(213, 323),    S(199, 323),    S(212, 363),    S(216, 335),    S(210, 295),    //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(352, 621),    S(376, 646),    S(333, 688),    S(317, 652),    S(373, 621),    S(326, 640),    S(351, 647),    S(344, 635),    //
    S(289, 644),    S(330, 661),    S(383, 621),    S(334, 617),    S(377, 606),    S(343, 624),    S(289, 659),    S(285, 652),    //
    S(267, 620),    S(376, 576),    S(413, 563),    S(371, 551),    S(377, 573),    S(317, 607),    S(300, 630),    S(257, 662),    //
    S(232, 592),    S(294, 610),    S(300, 604),    S(284, 596),    S(315, 571),    S(285, 604),    S(270, 620),    S(223, 635),    //
    S(207, 524),    S(261, 548),    S(245, 585),    S(211, 591),    S(228, 583),    S(220, 605),    S(208, 599),    S(181, 601),    //
    S(219, 429),    S(290, 460),    S(268, 496),    S(242, 517),    S(253, 520),    S(238, 535),    S(240, 507),    S(193, 523),    //
    S(146, 418),    S(269, 380),    S(264, 435),    S(247, 481),    S(257, 475),    S(241, 488),    S(236, 467),    S(206, 459),    //
    S(208, 383),    S(228, 420),    S(287, 422),    S(296, 420),    S(301, 428),    S(276, 452),    S(274, 438),    S(254, 438),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(504, 822),    S(578, 798),    S(461, 964),    S(412, 1030),   S(437, 1021),   S(491, 915),    S(480, 849),    S(432, 871),    //
    S(467, 840),    S(478, 895),    S(435, 980),    S(325, 1081),   S(373, 1058),   S(440, 911),    S(475, 823),    S(458, 784),    //
    S(437, 857),    S(471, 897),    S(435, 974),    S(408, 997),    S(427, 1002),   S(469, 895),    S(503, 783),    S(487, 750),    //
    S(433, 800),    S(438, 870),    S(398, 937),    S(405, 982),    S(431, 969),    S(435, 870),    S(481, 780),    S(463, 741),    //
    S(421, 781),    S(423, 783),    S(419, 832),    S(398, 898),    S(407, 923),    S(435, 856),    S(439, 795),    S(455, 716),    //
    S(422, 671),    S(457, 653),    S(449, 743),    S(424, 773),    S(439, 777),    S(439, 815),    S(462, 746),    S(444, 727),    //
    S(396, 486),    S(436, 462),    S(435, 557),    S(459, 618),    S(458, 656),    S(461, 637),    S(440, 665),    S(452, 647),    //
    S(369, 509),    S(418, 310),    S(438, 353),    S(446, 467),    S(463, 537),    S(460, 535),    S(457, 547),    S(424, 611),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(344, -624),   S(553, 66),     S(416, 285),    S(0, 431),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(412, -249),   S(358, 171),    S(193, 332),    S(-49, 378),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(216, -19),    S(221, 142),    S(47, 315),     S(-182, 420),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(44, -45),     S(116, 70),     S(-92, 295),    S(-252, 432),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-87, -79),    S(-15, 20),     S(-100, 212),   S(-252, 353),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-40, -112),   S(20, -35),     S(-74, 161),    S(-160, 280),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(44, -184),    S(46, -100),    S(-28, 55),     S(-120, 179),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-8, -285),    S(19, -170),    S(-71, -22),    S(-82, 16),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const PParam KS_NO_QUEEN = S(-71, -75);

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(7, -1), S(11, 1), S(10, 1), S(5, -1), S(2, -5),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(3, -2), S(6, -1), S(3, -1), S(3, -0), S(3, 0),
};

inline const PParam KS_FLANK_ATTACK = S(4, -3);
inline const PParam KS_FLANK_DEFENSE = S(-2, -1);
inline const PParam KS_FLANK_DOUBLE_ATTACK   = S(3, -1);
inline const PParam KS_FLANK_DOUBLE_DEFENSE  = S(-2, 1);

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(11, -5), S(-9, 9), S(-4, -4), S(5, -7), S(11, -14), S(2, -19), S(3, -41), }},
  {{ S(0, 11), S(-20, 5), S(-14, 8), S(-5, 9), S(-2, 6), S(-8, -1), S(-12, -20), }},
  {{ S(-2, 21), S(-10, 11), S(-7, 24), S(-1, 21), S(-0, 19), S(-5, 15), S(2, -338), }},
  {{ S(-0, 25), S(-9, 15), S(-2, 19), S(2, 18), S(3, 14), S(2, 20), S(4, 14), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(-6, 22), S(-20, 4), S(-21, 9), S(-18, 15), S(-4, 13),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(-8, 9), S(-50, -308), S(-14, -55), S(-8, -6), S(-13, -0), S(-16, 5), S(-16, 5), }},
  {{ S(-4, -0), S(-30, -280), S(-9, -61), S(-9, -14), S(-12, -6), S(-20, 2), S(-10, 1), }},
  {{ S(-11, 5), S(-5, -251), S(4, -35), S(-6, -9), S(-13, 1), S(-19, 6), S(-15, 7), }},
  {{ S(-10, -1), S(3, -76), S(4, -27), S(-7, 1), S(-17, 4), S(-22, 2), S(-18, 3), }},
}};
inline TunableSigmoid<32> KING_SAFETY_ACTIVATION(
        1527, 1387, -15, 6
);

inline VParam WINNABLE_PAWNS = V(-20);
inline VParam WINNABLE_SYM = V(105);
inline VParam WINNABLE_ASYM = V(92);
inline VParam WINNABLE_PAWN_ENDGAME = V(75);
inline VParam WINNABLE_BIAS = V(-409);

// Epoch duration: 11.5701s
// clang-format on
}  // namespace Clockwork
