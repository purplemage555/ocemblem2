//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("Sawyer"),
#line 86
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 87
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 89
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 91
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 93
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 92
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 94
    [TRAINER_OC_EASTFORD_MAPLE] =
    {
#line 95
        .trainerName = _("Maple"),
#line 96
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 97
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 98
F_TRAINER_FEMALE | 
#line 99
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 101
            .species = SPECIES_SWABLU,
#line 101
            .gender = TRAINER_MON_FEMALE,
#line 103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 102
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 104
    [TRAINER_OC_ROUTE1_IAN] =
    {
#line 105
        .trainerName = _("Ian"),
#line 106
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 107
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 109
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 111
            .species = SPECIES_MAGIKARP,
#line 111
            .gender = TRAINER_MON_MALE,
#line 113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 112
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 114
    [TRAINER_OC_ROUTE1_ANTHONY] =
    {
#line 115
        .trainerName = _("Anthony"),
#line 116
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 117
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 119
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 121
            .species = SPECIES_MAREEP,
#line 121
            .gender = TRAINER_MON_FEMALE,
#line 123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 122
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 124
    [TRAINER_OC_ROUTE1_HEDGE] =
    {
#line 125
        .trainerName = _("Hedge"),
#line 126
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 127
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 129
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 132
            .species = SPECIES_SHROOMISH,
#line 132
            .gender = TRAINER_MON_MALE,
#line 136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 134
            .ability = ABILITY_POISON_HEAL,
#line 133
            .lvl = 6,
#line 135
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 137
            .species = SPECIES_COTTONEE,
#line 137
            .gender = TRAINER_MON_FEMALE,
#line 141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 139
            .ability = ABILITY_INFILTRATOR,
#line 138
            .lvl = 6,
#line 140
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 142
    [TRAINER_OC_PIRATEBRIDGE_SAILOR1] =
    {
#line 143
        .trainerName = _("Bord"),
#line 144
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 145
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 147
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 149
            .species = SPECIES_WINGULL,
#line 149
            .gender = TRAINER_MON_MALE,
#line 152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 150
            .lvl = 6,
#line 151
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 153
    [TRAINER_OC_PIRATEBRIDGE_SAILOR2] =
    {
#line 154
        .trainerName = _("Cord"),
#line 155
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 156
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 158
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 161
            .species = SPECIES_VULPIX,
#line 161
            .gender = TRAINER_MON_MALE,
#line 164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 162
            .lvl = 6,
#line 163
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 165
    [TRAINER_OC_PIRATEBRIDGE_SAILOR3] =
    {
#line 166
        .trainerName = _("Barst"),
#line 167
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 168
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 173
            .species = SPECIES_TIMBURR,
#line 173
            .gender = TRAINER_MON_MALE,
#line 173
            .heldItem = ITEM_ORAN_BERRY,
#line 178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 175
            .ability = ABILITY_GUTS,
#line 174
            .lvl = 10,
#line 176
            .ball = ITEM_NET_BALL,
#line 177
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 179
    [TRAINER_OC_PIRATEBRIDGE_PIRATE] =
    {
#line 180
        .trainerName = _("Darros"),
#line 181
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 182
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 184
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 186
            .species = SPECIES_MEOWTH,
#line 186
            .gender = TRAINER_MON_MALE,
#line 190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 188
            .ability = ABILITY_PICKUP,
#line 187
            .lvl = 5,
#line 189
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 191
            .species = SPECIES_LOTAD,
#line 191
            .gender = TRAINER_MON_MALE,
#line 194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 192
            .lvl = 7,
#line 193
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 195
    [TRAINER_OC_R2_ELIWOOD] =
    {
#line 196
        .trainerName = _("Eliwood"),
#line 197
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 198
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 200
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 203
            .species = SPECIES_VULPIX,
#line 203
            .gender = TRAINER_MON_FEMALE,
#line 206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 204
            .lvl = 7,
#line 205
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 207
    [TRAINER_OC_R2_HECTOR] =
    {
#line 208
        .trainerName = _("Hector"),
#line 209
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 210
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 212
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 215
            .species = SPECIES_CORPHISH,
#line 215
            .gender = TRAINER_MON_MALE,
#line 218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 216
            .lvl = 7,
#line 217
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 219
    [TRAINER_OC_R2_LYNDIS] =
    {
#line 220
        .trainerName = _("Lyndis"),
#line 221
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 222
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 223
F_TRAINER_FEMALE | 
#line 224
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 227
            .species = SPECIES_SHROOMISH,
#line 227
            .gender = TRAINER_MON_FEMALE,
#line 230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 228
            .lvl = 7,
#line 229
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 231
    [TRAINER_OC_R2_ERROR] =
    {
#line 232
        .trainerName = _("Error"),
#line 233
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 234
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 236
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 238
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 239
            .lvl = 8,
#line 240
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 242
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .lvl = 7,
#line 244
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 246
    [TRAINER_OC_R2_BAGU] =
    {
#line 247
        .trainerName = _("Bagu"),
#line 248
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 249
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 251
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 253
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 254
            .lvl = 8,
#line 255
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 257
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 258
            .lvl = 7,
#line 259
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 261
    [TRAINER_OC_R2_JOE] =
    {
#line 262
        .trainerName = _("Joe"),
#line 263
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 264
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 266
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 268
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 269
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 271
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 272
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 274
    [TRAINER_OC_R2_GEORGE] =
    {
#line 275
        .trainerName = _("George"),
#line 276
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 277
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 279
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_BELLSPROUT,
#line 282
            .gender = TRAINER_MON_MALE,
#line 282
            .heldItem = ITEM_CHERI_BERRY,
#line 284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 283
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 285
            .species = SPECIES_GEODUDE,
#line 285
            .gender = TRAINER_MON_MALE,
#line 285
            .heldItem = ITEM_CHERI_BERRY,
#line 287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 286
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 288
    [TRAINER_OC_R2_LAURA] =
    {
#line 289
        .trainerName = _("Laura"),
#line 290
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 291
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 296
            .species = SPECIES_LOTAD,
#line 296
            .gender = TRAINER_MON_FEMALE,
#line 296
            .heldItem = ITEM_CHERI_BERRY,
#line 298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 297
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 299
            .species = SPECIES_MEOWTH,
#line 299
            .gender = TRAINER_MON_FEMALE,
#line 299
            .heldItem = ITEM_CHERI_BERRY,
#line 301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 300
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 302
    [TRAINER_OC_R2_KNIGHT] =
    {
#line 303
        .trainerName = _("Initiate"),
#line 304
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 305
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 307
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 309
            .species = SPECIES_PAWNIARD,
#line 309
            .gender = TRAINER_MON_MALE,
#line 312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 311
            .ability = ABILITY_DEFIANT,
#line 310
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 313
    [TRAINER_OC_R2_BART] =
    {
#line 314
        .trainerName = _("Bart"),
#line 315
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 316
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 318
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 321
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 322
            .lvl = 13,
#line 323
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 325
    [TRAINER_OC_SANCTUM_NAT] =
    {
#line 326
        .trainerName = _("Nat"),
#line 327
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 328
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 329
F_TRAINER_FEMALE | 
#line 330
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 333
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 334
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 336
            .species = SPECIES_VULPIX,
#line 336
            .gender = TRAINER_MON_FEMALE,
#line 338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 337
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 339
    [TRAINER_OC_JERRY311] =
    {
#line 340
        .trainerName = _("Jerry"),
#line 341
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 342
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 344
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 347
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 349
            .ability = ABILITY_FLUFFY,
#line 348
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 351
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 353
            .ability = ABILITY_FLUFFY,
#line 352
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 355
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 357
            .ability = ABILITY_FLUFFY,
#line 356
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 359
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 361
            .ability = ABILITY_FLUFFY,
#line 360
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 363
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 365
            .ability = ABILITY_FLUFFY,
#line 364
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 367
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 369
            .ability = ABILITY_FLUFFY,
#line 368
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 371
    [TRAINER_OC_DP_ROCK] =
    {
#line 372
        .trainerName = _("Dwayne"),
#line 373
        .trainerClass = TRAINER_CLASS_HIKER,
#line 374
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 376
            TRAINER_ENCOUNTER_MUSIC_HIKER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 378
            .species = SPECIES_GEODUDE,
#line 378
            .gender = TRAINER_MON_MALE,
#line 381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 380
            .ability = ABILITY_ROCK_HEAD,
#line 379
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 382
            .species = SPECIES_GEODUDE,
#line 382
            .gender = TRAINER_MON_MALE,
#line 385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 384
            .ability = ABILITY_ROCK_HEAD,
#line 383
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 386
            .species = SPECIES_GEODUDE,
#line 386
            .gender = TRAINER_MON_MALE,
#line 389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 388
            .ability = ABILITY_ROCK_HEAD,
#line 387
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 390
            .species = SPECIES_GEODUDE,
#line 390
            .gender = TRAINER_MON_MALE,
#line 393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 392
            .ability = ABILITY_ROCK_HEAD,
#line 391
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 394
            .species = SPECIES_GEODUDE,
#line 394
            .gender = TRAINER_MON_MALE,
#line 397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 396
            .ability = ABILITY_ROCK_HEAD,
#line 395
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 398
            .species = SPECIES_GEODUDE,
#line 398
            .gender = TRAINER_MON_MALE,
#line 401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 400
            .ability = ABILITY_ROCK_HEAD,
#line 399
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 402
    [TRAINER_OC_DP_FISHER] =
    {
#line 403
        .trainerName = _("Remo"),
#line 404
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 405
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 407
            TRAINER_ENCOUNTER_MUSIC_HIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 409
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 410
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 412
    [TRAINER_OC_DP_MYSTIC1] =
    {
#line 413
        .trainerName = _("Hexa"),
#line 414
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 415
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 416
F_TRAINER_FEMALE | 
#line 417
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 420
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 421
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 423
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 424
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 426
    [TRAINER_OC_DP_MYSTIC2] =
    {
#line 427
        .trainerName = _("Deci"),
#line 428
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 429
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 431
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 434
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 435
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 437
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 438
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 440
    [TRAINER_OC_DP_MYSTIC3] =
    {
#line 441
        .trainerName = _("Mal"),
#line 442
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 443
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 444
F_TRAINER_FEMALE | 
#line 445
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 448
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 449
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 451
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 452
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 454
    [TRAINER_OC_DP_KNIGHT1] =
    {
#line 455
        .trainerName = _("Squire"),
#line 456
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 457
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 459
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 461
            .species = SPECIES_ARON,
#line 461
            .gender = TRAINER_MON_MALE,
#line 463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 462
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 464
    [TRAINER_OC_DP_KNIGHT2] =
    {
#line 465
        .trainerName = _("Scout"),
#line 466
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 467
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 469
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 471
            .species = SPECIES_SANDILE,
#line 471
            .gender = TRAINER_MON_MALE,
#line 473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 472
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 474
    [TRAINER_OC_FT_WALLACE] =
    {
#line 475
        .trainerName = _("Wallace"),
#line 476
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 477
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 479
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 482
            .nickname = COMPOUND_STRING("Aardman"),
#line 482
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 482
            .heldItem = ITEM_SITRUS_BERRY,
#line 486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 483
            .lvl = 8,
#line 484
            .ball = ITEM_PREMIER_BALL,
#line 485
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 487
            .nickname = COMPOUND_STRING("Shaun"),
#line 487
            .species = SPECIES_MAREEP,
#line 487
            .gender = TRAINER_MON_MALE,
#line 487
            .heldItem = ITEM_PECHA_BERRY,
#line 492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 489
            .ability = ABILITY_FLUFFY,
#line 488
            .lvl = 9,
#line 490
            .ball = ITEM_PREMIER_BALL,
#line 491
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 493
            .nickname = COMPOUND_STRING("Gromit"),
#line 493
            .species = SPECIES_HOUNDOUR,
#line 493
            .gender = TRAINER_MON_MALE,
#line 493
            .heldItem = ITEM_LUM_BERRY,
#line 498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 495
            .ability = ABILITY_EARLY_BIRD,
#line 494
            .lvl = 12,
#line 496
            .ball = ITEM_PREMIER_BALL,
#line 497
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 499
    [TRAINER_OC_R3_SEB] =
    {
#line 500
        .trainerName = _("Sebastian"),
#line 501
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 502
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 504
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 507
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 508
            .lvl = 15,
#line 509
            .ball = ITEM_DIVE_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 511
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 512
            .lvl = 14,
#line 513
            .ball = ITEM_DIVE_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 515
    [TRAINER_OC_R3_ARIEL] =
    {
#line 516
        .trainerName = _("Ariel"),
#line 517
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 518
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 519
F_TRAINER_FEMALE | 
#line 520
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 523
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 525
            .ability = ABILITY_SHELL_ARMOR,
#line 524
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 526
                MOVE_BUBBLE,
                MOVE_TACKLE,
                MOVE_WITHDRAW,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 531
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 533
            .ability = ABILITY_SHELL_ARMOR,
#line 532
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 534
                MOVE_BUBBLE,
                MOVE_TACKLE,
                MOVE_WITHDRAW,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 539
    [TRAINER_OC_R3_ELLIOTT] =
    {
#line 540
        .trainerName = _("Elliott"),
#line 541
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 542
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 544
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 547
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 548
            .lvl = 13,
#line 549
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 551
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 552
            .lvl = 14,
#line 553
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 555
    [TRAINER_OC_R3_VENDOR] =
    {
#line 556
        .trainerName = _("Hielo"),
#line 557
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 558
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 560
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 563
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 564
            .lvl = 13,
#line 565
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 567
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 568
            .lvl = 14,
#line 569
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 571
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 572
            .lvl = 15,
#line 573
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 575
    [TRAINER_OC_R3_KING] =
    {
#line 576
        .trainerName = _("King Kn."),
#line 577
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 578
        .trainerPic = TRAINER_PIC_KING,
        .encounterMusic_gender = 
#line 580
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 581
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 583
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 583
            .heldItem = ITEM_ORAN_BERRY,
#line 588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 585
            .ability = ABILITY_SHEER_FORCE,
#line 584
            .lvl = 16,
#line 586
            .ball = ITEM_LUXURY_BALL,
#line 587
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 588
                MOVE_POISON_STING,
                MOVE_DOUBLE_KICK,
                MOVE_HORN_ATTACK,
                MOVE_LEER,
            },
            },
            {
#line 593
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 593
            .heldItem = ITEM_ORAN_BERRY,
#line 597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 594
            .lvl = 18,
#line 595
            .ball = ITEM_LUXURY_BALL,
#line 596
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 597
                MOVE_GIGA_BEAM,
            },
            },
        },
    },
#line 599
    [TRAINER_OC_R3_SAILOR1] =
    {
#line 600
        .trainerName = _("Bubba"),
#line 601
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 602
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 604
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 607
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 608
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 610
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 611
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 613
    [TRAINER_OC_R3_SAILOR2] =
    {
#line 614
        .trainerName = _("Gump"),
#line 615
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 616
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 618
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 621
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 622
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 624
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 625
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 627
    [TRAINER_OC_R3_SAILOR3] =
    {
#line 628
        .trainerName = _("Usagi"),
#line 629
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 630
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 631
F_TRAINER_FEMALE | 
#line 632
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 635
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 636
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 638
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 639
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 641
    [TRAINER_OC_BADGE1] =
    {
#line 642
        .trainerName = _("Erina"),
#line 643
        .trainerClass = TRAINER_CLASS_LEADER,
#line 644
        .trainerPic = TRAINER_PIC_WATERSTONE,
        .encounterMusic_gender = 
#line 645
F_TRAINER_FEMALE | 
#line 646
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 647
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 648
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 650
            .species = SPECIES_WINGULL,
#line 650
            .gender = TRAINER_MON_FEMALE,
#line 650
            .heldItem = ITEM_ORAN_BERRY,
#line 653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 651
            .lvl = 17,
#line 652
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 653
                MOVE_WATER_PULSE,
                MOVE_WING_ATTACK,
                MOVE_THUNDER_SHOCK,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 658
            .species = SPECIES_CORPHISH,
#line 658
            .gender = TRAINER_MON_FEMALE,
#line 658
            .heldItem = ITEM_ORAN_BERRY,
#line 662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 660
            .ability = ABILITY_SHELL_ARMOR,
#line 659
            .lvl = 17,
#line 661
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 662
                MOVE_BUBBLE_BEAM,
                MOVE_BITE,
                MOVE_PROTECT,
                MOVE_LEER,
            },
            },
            {
#line 667
            .species = SPECIES_CLOYSTER,
#line 667
            .gender = TRAINER_MON_FEMALE,
#line 667
            .heldItem = ITEM_APICOT_BERRY,
#line 670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 669
            .ability = ABILITY_SKILL_LINK,
#line 668
            .lvl = 20,
#line 671
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 672
                MOVE_WATER_PULSE,
                MOVE_WITHDRAW,
                MOVE_PROTECT,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
