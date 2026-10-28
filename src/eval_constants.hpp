#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(115, 292);
inline const PParam KNIGHT_MAT = S(578, 1088);
inline const PParam BISHOP_MAT = S(522, 1023);
inline const PParam ROOK_MAT   = S(398, 1097);
inline const PParam QUEEN_MAT  = S(864, 1894);

inline const PParam TEMPO_VAL  = S(73, 60);

inline const PParam BISHOP_XRAY_PAWNS   = S(-14, -4);
inline const PParam BISHOP_PAIR_VAL   = S(63, 244);
inline const PParam ROOK_OPEN_VAL     = S(116, -7);
inline const PParam ROOK_SEMIOPEN_VAL = S(49, 9);
inline const PParam MINOR_BEHIND_PAWN = S(16, 45);
inline const PParam RESTRICTED_SQUARES = S(20, 5);
inline const PParam SPACE_VAL = S(95, -107);

inline const PParam DOUBLED_PAWN_VAL = S(-21, -96);
inline const PParam ISOLATED_PAWN_VAL = S(-26, -46);
inline const PParam OPPOSED_WEAK_PAWN_VAL = S(24, 12);

inline const PParam POTENTIAL_CHECKER_VAL = S(-43, -50);
inline const PParam OUTPOST_KNIGHT_VAL    = S(50, 45);
inline const PParam OUTPOST_BISHOP_VAL    = S(44, 43);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(39, 53);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(42, 0);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(19, 67);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(63, -55);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, -12), S(40, 25), S(50, 78), S(115, 224), S(384, 463), S(798, 1049),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(55, 25), S(42, 23), S(41, 72), S(86, 184), S(379, 138),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-74, -186), S(-76, -145), S(-41, -19), S(9, 100), S(96, 330), S(238, 548),
};
inline const std::array<PParam, 6> PASSED_CLEAR_STOPPERS = {
    S(-64, 53), S(-69, 27), S(-44, 91), S(-79, 210), S(-32, 290), S(85, 186),
};
inline const std::array<PParam, 6> PASSED_CLEAR_FORWARD = {
    S(0, 58), S(-6, 47), S(-57, 102), S(-7, 107), S(109, 98), S(42, 187),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(21, -35), S(18, 6), S(10, 41), S(23, 96), S(90, 235), S(402, 147),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(8, -24), S(-1, 16), S(-7, -23), S(-6, -67), S(-22, -162), S(-192, -450),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(14, 185), S(-2, 137), S(-6, 60), S(4, 21), S(17, 21), S(55, 11), S(62, -16),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-136, -41), S(-4, -12), S(-11, 78), S(24, 114), S(36, 150), S(44, 162), S(30, 138),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(51, -33), S(130, 236), S(161, 363), S(181, 418), S(204, 456), S(219, 498), S(238, 504), S(258, 510), S(278, 462),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(93, 26), S(156, 264), S(210, 355), S(229, 429), S(245, 482), S(255, 520), S(261, 547), S(261, 572), S(265, 583), S(270, 592), S(283, 580), S(285, 574), S(287, 584), S(247, 542),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(329, 403), S(241, 621), S(264, 654), S(280, 676), S(290, 697), S(294, 711), S(298, 730), S(302, 739), S(306, 752), S(311, 763), S(313, 772), S(311, 784), S(313, 790), S(319, 777), S(334, 743),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(444, 502), S(567, 772), S(593, 922), S(612, 1076), S(632, 1117), S(640, 1170), S(645, 1219), S(647, 1248), S(649, 1278), S(652, 1295), S(655, 1310), S(662, 1314), S(664, 1323), S(670, 1322), S(670, 1327), S(673, 1325), S(668, 1330), S(670, 1317), S(669, 1316), S(679, 1301), S(661, 1302), S(684, 1261), S(645, 1298), S(598, 1296), S(562, 1288), S(522, 1312), S(450, 1372), S(490, 1283),
};

inline const PParam PAWN_THREAT_KNIGHT = S(207, 169);
inline const PParam PAWN_THREAT_BISHOP = S(169, 250);
inline const PParam PAWN_THREAT_ROOK   = S(198, 151);
inline const PParam PAWN_THREAT_QUEEN  = S(161, 25);

inline const std::array<std::array<PParam, 5>, 2> MINOR_THREAT = {{
  {{ S(9, 58), S(99, 103), S(103, 132), S(184, 92), S(172, 26), }},
  {{ S(6, 61), S(90, 92), S(102, 124), S(208, 638), S(163, -68), }},
}};
inline const std::array<std::array<PParam, 5>, 2> ROOK_THREAT = {{
  {{ S(7, 69), S(47, 118), S(66, 112), S(17, 20), S(163, -74), }},
  {{ S(-3, 58), S(65, 82), S(104, 69), S(15, 11), S(206, 1234), }},
}};
inline const PParam KING_THREAT  = S(20, 127);
inline const PParam HANGING_PAWN  = S(32, 92);
inline const PParam HANGING_NON_PAWN  = S(74, 29);

inline const std::array<PParam, 2> KNIGHT_ON_QUEEN = {
    S(19, -4), S(39, -11),
};
inline const std::array<PParam, 2> BISHOP_ON_QUEEN = {
    S(50, 37), S(118, -120),
};
inline const std::array<PParam, 2> ROOK_ON_QUEEN = {
    S(42, 5), S(48, -3),
};

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(6, -21), S(6, -18), S(1, -24), S(-5, -32), S(-12, -39), S(-18, -44), S(-20, -54), S(-25, -51), S(-25, -99),
};

inline const PParam ROOK_LINEUP = S(20, 81);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(302, 467),    S(176, 576),    S(175, 452),    S(257, 505),    S(258, 439),    S(227, 473),    S(227, 485),    S(325, 424),    //
    S(134, 297),    S(128, 347),    S(100, 316),    S(106, 254),    S(101, 213),    S(78, 240),     S(88, 280),     S(69, 299),     //
    S(125, 247),    S(89, 276),     S(96, 267),     S(78, 201),     S(65, 185),     S(56, 209),     S(40, 216),     S(46, 251),     //
    S(81, 182),     S(48, 221),     S(65, 212),     S(60, 157),     S(40, 146),     S(34, 184),     S(-1, 194),     S(4, 198),      //
    S(66, 143),     S(98, 144),     S(72, 227),     S(68, 185),     S(47, 176),     S(21, 187),     S(-4, 185),     S(-10, 182),    //
    S(90, 166),     S(168, 137),    S(159, 166),    S(121, 202),    S(94, 180),     S(64, 182),     S(28, 193),     S(15, 195),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-171, -322),  S(-168, 277),   S(-186, 336),   S(121, 277),    S(22, 281),     S(-207, 346),   S(-244, 317),   S(-264, -233),  //
    S(97, 219),     S(88, 253),     S(184, 237),    S(183, 314),    S(201, 283),    S(152, 250),    S(89, 236),     S(44, 241),     //
    S(131, 198),    S(132, 265),    S(137, 298),    S(165, 324),    S(151, 321),    S(111, 293),    S(93, 266),     S(52, 229),     //
    S(181, 258),    S(179, 294),    S(185, 319),    S(194, 362),    S(198, 345),    S(165, 305),    S(145, 253),    S(118, 260),    //
    S(171, 239),    S(192, 228),    S(197, 277),    S(183, 323),    S(181, 305),    S(162, 289),    S(153, 234),    S(118, 225),    //
    S(114, 158),    S(140, 177),    S(144, 236),    S(153, 280),    S(151, 272),    S(124, 227),    S(110, 190),    S(69, 155),     //
    S(134, 172),    S(125, 209),    S(121, 178),    S(132, 217),    S(127, 214),    S(98, 162),     S(55, 212),     S(41, 112),     //
    S(44, 105),     S(108, 159),    S(120, 161),    S(134, 180),    S(120, 184),    S(78, 154),     S(66, 181),     S(6, 65),       //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(75, 331),     S(-44, 478),    S(-223, 553),   S(-96, 477),    S(-113, 509),   S(-82, 503),    S(-14, 467),    S(37, 447),     //
    S(145, 338),    S(107, 456),    S(123, 436),    S(119, 437),    S(125, 441),    S(148, 399),    S(163, 397),    S(123, 372),    //
    S(222, 373),    S(196, 409),    S(209, 426),    S(205, 420),    S(205, 404),    S(201, 408),    S(178, 403),    S(203, 337),    //
    S(187, 353),    S(227, 391),    S(245, 395),    S(263, 429),    S(277, 420),    S(223, 384),    S(219, 365),    S(178, 346),    //
    S(213, 324),    S(217, 366),    S(254, 374),    S(271, 396),    S(260, 394),    S(246, 381),    S(199, 363),    S(183, 322),    //
    S(233, 333),    S(258, 331),    S(273, 356),    S(244, 394),    S(240, 372),    S(237, 370),    S(240, 351),    S(202, 324),    //
    S(207, 282),    S(300, 272),    S(240, 330),    S(226, 345),    S(214, 340),    S(225, 303),    S(231, 284),    S(213, 314),    //
    S(213, 287),    S(201, 325),    S(207, 342),    S(215, 326),    S(202, 325),    S(214, 366),    S(218, 338),    S(212, 297),    //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(352, 625),    S(375, 651),    S(333, 693),    S(320, 654),    S(373, 625),    S(326, 646),    S(351, 652),    S(345, 637),    //
    S(290, 647),    S(331, 664),    S(384, 625),    S(336, 619),    S(379, 608),    S(344, 627),    S(291, 661),    S(287, 655),    //
    S(267, 624),    S(378, 579),    S(416, 564),    S(374, 553),    S(380, 574),    S(318, 609),    S(302, 631),    S(257, 665),    //
    S(232, 596),    S(295, 612),    S(301, 606),    S(286, 598),    S(316, 574),    S(286, 606),    S(272, 621),    S(223, 638),    //
    S(207, 527),    S(262, 550),    S(246, 588),    S(212, 594),    S(229, 585),    S(221, 607),    S(209, 601),    S(181, 604),    //
    S(219, 432),    S(292, 461),    S(270, 498),    S(243, 518),    S(254, 521),    S(239, 537),    S(241, 509),    S(193, 525),    //
    S(147, 419),    S(270, 382),    S(266, 436),    S(249, 482),    S(258, 477),    S(242, 490),    S(237, 469),    S(207, 461),    //
    S(209, 384),    S(229, 422),    S(288, 424),    S(297, 422),    S(302, 430),    S(278, 454),    S(275, 440),    S(255, 440),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(505, 829),    S(581, 801),    S(463, 968),    S(413, 1035),   S(438, 1026),   S(491, 922),    S(483, 851),    S(434, 875),    //
    S(468, 847),    S(479, 901),    S(436, 987),    S(326, 1086),   S(376, 1061),   S(441, 917),    S(477, 826),    S(459, 789),    //
    S(439, 861),    S(472, 903),    S(436, 980),    S(409, 1001),   S(428, 1008),   S(470, 900),    S(506, 784),    S(489, 755),    //
    S(434, 805),    S(440, 874),    S(400, 941),    S(406, 988),    S(432, 975),    S(436, 875),    S(483, 783),    S(464, 746),    //
    S(423, 785),    S(425, 786),    S(421, 836),    S(400, 901),    S(408, 929),    S(436, 862),    S(441, 799),    S(457, 720),    //
    S(424, 673),    S(459, 655),    S(451, 746),    S(425, 777),    S(441, 781),    S(440, 821),    S(464, 750),    S(445, 732),    //
    S(397, 489),    S(438, 464),    S(437, 560),    S(461, 622),    S(460, 660),    S(463, 641),    S(442, 669),    S(453, 653),    //
    S(371, 510),    S(419, 312),    S(439, 354),    S(447, 470),    S(465, 540),    S(462, 537),    S(459, 549),    S(425, 615),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(344, -626),   S(559, 63),     S(415, 289),    S(1, 431),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(415, -253),   S(362, 169),    S(195, 331),    S(-49, 379),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(216, -18),    S(223, 141),    S(47, 316),     S(-183, 420),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(42, -43),     S(117, 70),     S(-92, 295),    S(-253, 432),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-88, -79),    S(-16, 20),     S(-101, 212),   S(-255, 355),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-40, -112),   S(20, -35),     S(-74, 162),    S(-161, 281),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(45, -184),    S(46, -100),    S(-28, 54),     S(-121, 180),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-8, -286),    S(19, -170),    S(-71, -22),    S(-82, 17),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
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
  {{ S(12, -4), S(-9, 9), S(-4, -3), S(5, -6), S(12, -14), S(2, -19), S(3, -40), }},
  {{ S(0, 12), S(-19, 5), S(-14, 9), S(-5, 10), S(-2, 7), S(-8, -1), S(-11, -20), }},
  {{ S(-2, 22), S(-10, 12), S(-7, 24), S(-1, 22), S(-0, 20), S(-5, 16), S(2, -337), }},
  {{ S(0, 25), S(-9, 16), S(-2, 20), S(3, 18), S(3, 15), S(3, 20), S(4, 14), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(-7, 23), S(-20, 5), S(-21, 10), S(-18, 15), S(-4, 13),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(-8, 9), S(-50, -306), S(-15, -55), S(-9, -5), S(-14, -0), S(-17, 5), S(-17, 5), }},
  {{ S(-4, 0), S(-31, -280), S(-9, -60), S(-10, -14), S(-12, -6), S(-20, 2), S(-11, 2), }},
  {{ S(-12, 5), S(-5, -249), S(4, -35), S(-6, -9), S(-13, 1), S(-19, 6), S(-16, 8), }},
  {{ S(-10, -1), S(3, -76), S(3, -27), S(-8, 1), S(-17, 5), S(-22, 2), S(-19, 3), }},
}};
inline TunableSigmoid<32> KING_SAFETY_ACTIVATION(
        1530, 1390, -15, 4
);

inline VParam WINNABLE_PAWNS = V(-20);
inline VParam WINNABLE_SYM = V(106);
inline VParam WINNABLE_ASYM = V(93);
inline VParam WINNABLE_PAWN_ENDGAME = V(72);
inline VParam WINNABLE_BIAS = V(-412);

// Epoch duration: 11.4711s
// clang-format on
}  // namespace Clockwork
