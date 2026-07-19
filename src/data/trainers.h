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
#line 96
    [TRAINER_OC_EASTFORD_MAPLE] =
    {
#line 97
        .trainerName = _("Maple"),
#line 98
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 99
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 100
F_TRAINER_FEMALE | 
#line 101
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 102
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 104
            .nickname = COMPOUND_STRING("Artoria"),
#line 104
            .species = SPECIES_SWABLU,
#line 104
            .gender = TRAINER_MON_FEMALE,
#line 106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 105
            .lvl = 4,
#line 107
            .ball = ITEM_MOON_BALL,
#line 108
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 112
    [TRAINER_OC_ROUTE1_IAN] =
    {
#line 113
        .trainerName = _("Ian"),
#line 114
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 115
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 117
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_MAGIKARP,
#line 119
            .gender = TRAINER_MON_MALE,
#line 121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 120
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 122
    [TRAINER_OC_ROUTE1_ANTHONY] =
    {
#line 123
        .trainerName = _("Anthony"),
#line 124
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 125
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 127
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 129
            .species = SPECIES_MAREEP,
#line 129
            .gender = TRAINER_MON_FEMALE,
#line 131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 130
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 132
    [TRAINER_OC_ROUTE1_HEDGE] =
    {
#line 133
        .trainerName = _("Hedge"),
#line 134
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 135
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 140
            .species = SPECIES_SHROOMISH,
#line 140
            .gender = TRAINER_MON_MALE,
#line 144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 142
            .ability = ABILITY_POISON_HEAL,
#line 141
            .lvl = 6,
#line 143
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 145
            .species = SPECIES_COTTONEE,
#line 145
            .gender = TRAINER_MON_FEMALE,
#line 149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 147
            .ability = ABILITY_INFILTRATOR,
#line 146
            .lvl = 6,
#line 148
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 152
    [TRAINER_OC_PIRATEBRIDGE_SAILOR1] =
    {
#line 153
        .trainerName = _("Bord"),
#line 154
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 155
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 157
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 159
            .species = SPECIES_WINGULL,
#line 159
            .gender = TRAINER_MON_MALE,
#line 162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 160
            .lvl = 6,
#line 161
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 163
    [TRAINER_OC_PIRATEBRIDGE_SAILOR2] =
    {
#line 164
        .trainerName = _("Cord"),
#line 165
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 166
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 168
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 171
            .species = SPECIES_VULPIX,
#line 171
            .gender = TRAINER_MON_MALE,
#line 174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 172
            .lvl = 6,
#line 173
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 175
    [TRAINER_OC_PIRATEBRIDGE_SAILOR3] =
    {
#line 176
        .trainerName = _("Barst"),
#line 177
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 178
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 180
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 183
            .species = SPECIES_TIMBURR,
#line 183
            .gender = TRAINER_MON_MALE,
#line 183
            .heldItem = ITEM_ORAN_BERRY,
#line 187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .ability = ABILITY_GUTS,
#line 184
            .lvl = 10,
#line 186
            .ball = ITEM_NET_BALL,
#line 188
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 190
    [TRAINER_OC_PIRATEBRIDGE_PIRATE] =
    {
#line 191
        .trainerName = _("Darros"),
#line 192
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 193
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 195
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 197
            .species = SPECIES_MEOWTH,
#line 197
            .gender = TRAINER_MON_MALE,
#line 201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 199
            .ability = ABILITY_PICKUP,
#line 198
            .lvl = 5,
#line 200
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 202
            .species = SPECIES_LOTAD,
#line 202
            .gender = TRAINER_MON_MALE,
#line 205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 203
            .lvl = 7,
#line 204
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 208
    [TRAINER_OC_R2_ELIWOOD] =
    {
#line 209
        .trainerName = _("Eliwood"),
#line 210
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 211
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 213
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 216
            .species = SPECIES_VULPIX,
#line 216
            .gender = TRAINER_MON_FEMALE,
#line 219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 217
            .lvl = 21,
#line 218
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 220
    [TRAINER_OC_R2_HECTOR] =
    {
#line 221
        .trainerName = _("Hector"),
#line 222
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 223
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 225
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 228
            .species = SPECIES_CORPHISH,
#line 228
            .gender = TRAINER_MON_MALE,
#line 231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 229
            .lvl = 21,
#line 230
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 232
    [TRAINER_OC_R2_LYNDIS] =
    {
#line 233
        .trainerName = _("Lyndis"),
#line 234
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 235
        .trainerPic = TRAINER_PIC_RANGER_FC,
        .encounterMusic_gender = 
#line 236
F_TRAINER_FEMALE | 
#line 237
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 240
            .species = SPECIES_SHROOMISH,
#line 240
            .gender = TRAINER_MON_FEMALE,
#line 243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 241
            .lvl = 21,
#line 242
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 244
    [TRAINER_OC_R2_ERROR] =
    {
#line 245
        .trainerName = _("Error"),
#line 246
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 247
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 249
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 251
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 252
            .lvl = 8,
#line 253
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 255
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 256
            .lvl = 7,
#line 257
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 259
    [TRAINER_OC_R2_BAGU] =
    {
#line 260
        .trainerName = _("Bagu"),
#line 261
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 262
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 264
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 266
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 267
            .lvl = 8,
#line 268
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 270
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 271
            .lvl = 7,
#line 272
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 274
    [TRAINER_OC_R2_JOE] =
    {
#line 275
        .trainerName = _("Joe"),
#line 276
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 277
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 279
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 280
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 283
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 285
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 286
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 288
    [TRAINER_OC_R2_GEORGE] =
    {
#line 289
        .trainerName = _("George"),
#line 290
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 291
        .trainerPic = TRAINER_PIC_CAMPER_C,
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
            .nickname = COMPOUND_STRING("Peashooter"),
#line 296
            .species = SPECIES_BELLSPROUT,
#line 296
            .gender = TRAINER_MON_MALE,
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
            .nickname = COMPOUND_STRING("Squash"),
#line 299
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
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
    [TRAINER_OC_R2_LAURA] =
    {
#line 303
        .trainerName = _("Laura"),
#line 304
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 305
        .trainerPic = TRAINER_PIC_PICNICKER_C,
        .encounterMusic_gender = 
#line 306
F_TRAINER_FEMALE | 
#line 307
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 310
            .nickname = COMPOUND_STRING("Lily Pad"),
#line 310
            .species = SPECIES_LOTAD,
#line 310
            .gender = TRAINER_MON_FEMALE,
#line 310
            .heldItem = ITEM_CHERI_BERRY,
#line 312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 311
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 313
            .nickname = COMPOUND_STRING("Cattail"),
#line 313
            .species = SPECIES_MEOWTH,
#line 313
            .gender = TRAINER_MON_FEMALE,
#line 313
            .heldItem = ITEM_CHERI_BERRY,
#line 315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 314
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 316
    [TRAINER_OC_R2_KNIGHT] =
    {
#line 317
        .trainerName = _("Initiate"),
#line 318
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 319
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 321
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 323
            .species = SPECIES_PAWNIARD,
#line 323
            .gender = TRAINER_MON_MALE,
#line 326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 325
            .ability = ABILITY_DEFIANT,
#line 324
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 327
    [TRAINER_OC_R2_BART] =
    {
#line 328
        .trainerName = _("Bart"),
#line 329
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 330
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 332
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 335
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 336
            .lvl = 13,
#line 337
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 341
    [TRAINER_OC_SANCTUM_NAT] =
    {
#line 342
        .trainerName = _("Nat"),
#line 343
        .trainerClass = TRAINER_CLASS_SORCERER,
#line 344
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 345
F_TRAINER_FEMALE | 
#line 346
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 349
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 350
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 352
            .species = SPECIES_VULPIX,
#line 352
            .gender = TRAINER_MON_FEMALE,
#line 354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 353
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 357
    [TRAINER_OC_JERRY311] =
    {
#line 358
        .trainerName = _("Jerry"),
#line 359
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 360
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 362
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 365
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 367
            .ability = ABILITY_FLUFFY,
#line 366
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 369
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 371
            .ability = ABILITY_FLUFFY,
#line 370
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 373
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 375
            .ability = ABILITY_FLUFFY,
#line 374
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 377
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 379
            .ability = ABILITY_FLUFFY,
#line 378
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 381
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 383
            .ability = ABILITY_FLUFFY,
#line 382
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 385
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 387
            .ability = ABILITY_FLUFFY,
#line 386
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 391
    [TRAINER_OC_DP_ROCK] =
    {
#line 392
        .trainerName = _("Dwayne"),
#line 393
        .trainerClass = TRAINER_CLASS_HIKER,
#line 394
        .trainerPic = TRAINER_PIC_HIKER_B,
        .encounterMusic_gender = 
#line 396
            TRAINER_ENCOUNTER_MUSIC_HIKER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 398
            .nickname = COMPOUND_STRING("Rock"),
#line 398
            .species = SPECIES_GEODUDE,
#line 398
            .gender = TRAINER_MON_MALE,
#line 398
            .heldItem = ITEM_HARD_STONE,
#line 401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 400
            .ability = ABILITY_ROCK_HEAD,
#line 399
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 402
            .nickname = COMPOUND_STRING("Rock"),
#line 402
            .species = SPECIES_GEODUDE,
#line 402
            .gender = TRAINER_MON_MALE,
#line 402
            .heldItem = ITEM_HARD_STONE,
#line 405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 404
            .ability = ABILITY_ROCK_HEAD,
#line 403
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 406
            .nickname = COMPOUND_STRING("Rock"),
#line 406
            .species = SPECIES_GEODUDE,
#line 406
            .gender = TRAINER_MON_MALE,
#line 406
            .heldItem = ITEM_HARD_STONE,
#line 409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 408
            .ability = ABILITY_ROCK_HEAD,
#line 407
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 410
            .nickname = COMPOUND_STRING("Rock"),
#line 410
            .species = SPECIES_GEODUDE,
#line 410
            .gender = TRAINER_MON_MALE,
#line 410
            .heldItem = ITEM_HARD_STONE,
#line 413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 412
            .ability = ABILITY_ROCK_HEAD,
#line 411
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 414
            .nickname = COMPOUND_STRING("Rock"),
#line 414
            .species = SPECIES_GEODUDE,
#line 414
            .gender = TRAINER_MON_MALE,
#line 414
            .heldItem = ITEM_HARD_STONE,
#line 417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 416
            .ability = ABILITY_ROCK_HEAD,
#line 415
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 418
            .nickname = COMPOUND_STRING("Rock"),
#line 418
            .species = SPECIES_GEODUDE,
#line 418
            .gender = TRAINER_MON_MALE,
#line 418
            .heldItem = ITEM_HARD_STONE,
#line 421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 420
            .ability = ABILITY_ROCK_HEAD,
#line 419
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 422
    [TRAINER_OC_DP_FISHER] =
    {
#line 423
        .trainerName = _("Remo"),
#line 424
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 425
        .trainerPic = TRAINER_PIC_FISHERMAN_B,
        .encounterMusic_gender = 
#line 427
            TRAINER_ENCOUNTER_MUSIC_HIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 429
            .nickname = COMPOUND_STRING("Rem"),
#line 429
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 431
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 430
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 432
    [TRAINER_OC_DP_MYSTIC1] =
    {
#line 433
        .trainerName = _("Hexa"),
#line 434
        .trainerClass = TRAINER_CLASS_ALCHEMIST,
#line 435
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 436
F_TRAINER_FEMALE | 
#line 437
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 440
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 441
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 443
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 444
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 446
    [TRAINER_OC_DP_MYSTIC2] =
    {
#line 447
        .trainerName = _("Deci"),
#line 448
        .trainerClass = TRAINER_CLASS_SORCERER,
#line 449
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 451
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 454
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 455
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 457
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 458
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 459
                MOVE_CONFUSION,
                MOVE_ACID,
                MOVE_CURSE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 464
    [TRAINER_OC_DP_MYSTIC3] =
    {
#line 465
        .trainerName = _("Mal"),
#line 466
        .trainerClass = TRAINER_CLASS_SORCERER,
#line 467
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 468
F_TRAINER_FEMALE | 
#line 469
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 472
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 473
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 475
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 476
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 478
    [TRAINER_OC_DP_KNIGHT1] =
    {
#line 479
        .trainerName = _("Squire"),
#line 480
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 481
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 483
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 485
            .species = SPECIES_ARON,
#line 485
            .gender = TRAINER_MON_MALE,
#line 487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 486
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 488
    [TRAINER_OC_DP_KNIGHT2] =
    {
#line 489
        .trainerName = _("Scout"),
#line 490
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 491
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 493
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 495
            .species = SPECIES_SANDILE,
#line 495
            .gender = TRAINER_MON_MALE,
#line 497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 496
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 500
    [TRAINER_OC_FT_WALLACE] =
    {
#line 501
        .trainerName = _("Wallace"),
#line 502
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 503
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 505
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 508
            .nickname = COMPOUND_STRING("Aardman"),
#line 508
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 508
            .heldItem = ITEM_SITRUS_BERRY,
#line 512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 509
            .lvl = 8,
#line 510
            .ball = ITEM_PREMIER_BALL,
#line 511
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 513
            .nickname = COMPOUND_STRING("Shaun"),
#line 513
            .species = SPECIES_MAREEP,
#line 513
            .gender = TRAINER_MON_MALE,
#line 513
            .heldItem = ITEM_PECHA_BERRY,
#line 518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 515
            .ability = ABILITY_FLUFFY,
#line 514
            .lvl = 9,
#line 516
            .ball = ITEM_PREMIER_BALL,
#line 517
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 519
            .nickname = COMPOUND_STRING("Gromit"),
#line 519
            .species = SPECIES_HOUNDOUR,
#line 519
            .gender = TRAINER_MON_MALE,
#line 519
            .heldItem = ITEM_LUM_BERRY,
#line 524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 521
            .ability = ABILITY_EARLY_BIRD,
#line 520
            .lvl = 12,
#line 522
            .ball = ITEM_PREMIER_BALL,
#line 523
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 527
    [TRAINER_OC_R3_SEB] =
    {
#line 528
        .trainerName = _("Sebastian"),
#line 529
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 530
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 532
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 535
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 536
            .lvl = 15,
#line 537
            .ball = ITEM_DIVE_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 539
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 540
            .lvl = 14,
#line 541
            .ball = ITEM_DIVE_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 543
    [TRAINER_OC_R3_ARIEL] =
    {
#line 544
        .trainerName = _("Ariel"),
#line 545
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 546
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 547
F_TRAINER_FEMALE | 
#line 548
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 551
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 553
            .ability = ABILITY_SHELL_ARMOR,
#line 552
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 554
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
                MOVE_LEER,
            },
            },
            {
#line 558
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 560
            .ability = ABILITY_SHELL_ARMOR,
#line 559
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 561
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
                MOVE_LEER,
            },
            },
        },
    },
#line 565
    [TRAINER_OC_R3_ELLIOTT] =
    {
#line 566
        .trainerName = _("Elliott"),
#line 567
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 568
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 570
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 573
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 574
            .lvl = 13,
#line 575
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 577
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 578
            .lvl = 14,
#line 579
            .ball = ITEM_NET_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 581
    [TRAINER_OC_R3_VENDOR] =
    {
#line 582
        .trainerName = _("Hielo"),
#line 583
        .trainerClass = TRAINER_CLASS_GOURMET,
#line 584
        .trainerPic = TRAINER_PIC_SAILOR_B,
        .encounterMusic_gender = 
#line 586
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 589
            .nickname = COMPOUND_STRING("Soft-Serve"),
#line 589
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 590
            .lvl = 13,
#line 591
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 593
            .nickname = COMPOUND_STRING("Gelato"),
#line 593
            .species = SPECIES_VANILLITE,
#line 593
            .gender = TRAINER_MON_MALE,
#line 596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 594
            .lvl = 14,
#line 595
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 597
            .nickname = COMPOUND_STRING("Sorbetes"),
#line 597
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 598
            .lvl = 15,
#line 599
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 603
    [TRAINER_OC_R3_KING] =
    {
#line 604
        .trainerName = _("King"),
#line 605
        .trainerClass = TRAINER_CLASS_FOREVER_LORD,
#line 606
        .trainerPic = TRAINER_PIC_KING,
        .encounterMusic_gender = 
#line 608
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 609
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_ACE_POKEMON,
#line 610
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 612
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 612
            .heldItem = ITEM_ORAN_BERRY,
#line 616
            .ev = TRAINER_PARTY_EVS(4, 0, 4, 0, 0, 0),
#line 615
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 0, 0),
#line 614
            .ability = ABILITY_SHEER_FORCE,
#line 613
            .lvl = 16,
#line 617
            .ball = ITEM_LUXURY_BALL,
#line 618
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 619
                MOVE_POISON_STING,
                MOVE_BULLDOZE,
            },
            },
            {
#line 622
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 622
            .heldItem = ITEM_MACHO_BRACE,
#line 625
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 0, 0, 0),
#line 624
            .iv = TRAINER_PARTY_IVS(0, 31, 0, 0, 0, 0),
#line 623
            .lvl = 18,
#line 626
            .ball = ITEM_LUXURY_BALL,
#line 627
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 628
                MOVE_GIGA_BEAM,
            },
            },
        },
    },
#line 632
    [TRAINER_OC_R3_SAILOR1] =
    {
#line 633
        .trainerName = _("Bubba"),
#line 634
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 635
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 637
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 640
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 641
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 643
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 644
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 646
    [TRAINER_OC_R3_SAILOR2] =
    {
#line 647
        .trainerName = _("Gump"),
#line 648
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 649
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 651
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 654
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 655
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 657
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 658
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 660
    [TRAINER_OC_R3_SAILOR3] =
    {
#line 661
        .trainerName = _("Usagi"),
#line 662
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 663
        .trainerPic = TRAINER_PIC_LASS_C,
        .encounterMusic_gender = 
#line 664
F_TRAINER_FEMALE | 
#line 665
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 668
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 669
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 671
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 672
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 676
    [TRAINER_OC_BADGE1HINT] =
    {
#line 677
        .trainerName = _("Guide"),
#line 678
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 679
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 681
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 682
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 684
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 688
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 686
            .ability = ABILITY_SHELL_ARMOR,
#line 685
            .lvl = 16,
#line 689
            .ball = ITEM_NET_BALL,
#line 690
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 691
                MOVE_BUBBLE,
                MOVE_WITHDRAW,
                MOVE_LEER,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 698
    [TRAINER_OC_BADGE1] =
    {
#line 699
        .trainerName = _("Erina"),
#line 700
        .trainerClass = TRAINER_CLASS_GOVERNOR,
#line 701
        .trainerPic = TRAINER_PIC_BADGE1,
        .encounterMusic_gender = 
#line 702
F_TRAINER_FEMALE | 
#line 703
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 704
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_SODA_POP },
#line 705
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
#line 706
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 708
            .species = SPECIES_WINGULL,
#line 708
            .gender = TRAINER_MON_FEMALE,
#line 708
            .heldItem = ITEM_ORAN_BERRY,
#line 711
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 4, 31, 31),
#line 709
            .lvl = 17,
#line 712
            .ball = ITEM_NET_BALL,
#line 713
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 714
                MOVE_WATER_PULSE,
                MOVE_AIR_CUTTER,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 719
            .species = SPECIES_CHINCHOU,
#line 719
            .gender = TRAINER_MON_FEMALE,
#line 719
            .heldItem = ITEM_ORAN_BERRY,
#line 723
            .ev = TRAINER_PARTY_EVS(8, 0, 8, 8, 8, 8),
#line 722
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 4, 31, 31),
#line 721
            .ability = ABILITY_VOLT_ABSORB,
#line 720
            .lvl = 18,
#line 724
            .ball = ITEM_NET_BALL,
#line 725
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 726
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 731
            .nickname = COMPOUND_STRING("Pearlice"),
#line 731
            .species = SPECIES_CLOYSTER,
#line 731
            .gender = TRAINER_MON_FEMALE,
#line 731
            .heldItem = ITEM_APICOT_BERRY,
#line 735
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 734
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 733
            .ability = ABILITY_SHELL_ARMOR,
#line 732
            .lvl = 19,
#line 736
            .ball = ITEM_NET_BALL,
#line 737
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 738
                MOVE_WATER_PULSE,
                MOVE_WITHDRAW,
                MOVE_LEER,
                MOVE_RAPID_SPIN,
            },
            },
        },
    },
#line 745
    [TRAINER_OC_R4_MAPLE] =
    {
#line 746
        .trainerName = _("Maple"),
#line 747
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 748
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 749
F_TRAINER_FEMALE | 
#line 750
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 751
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
#line 752
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 754
            .nickname = COMPOUND_STRING("Terra"),
#line 754
            .species = SPECIES_EEVEE,
#line 754
            .gender = TRAINER_MON_FEMALE,
#line 754
            .heldItem = ITEM_ORAN_BERRY,
#line 756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 755
            .lvl = 18,
#line 757
            .ball = ITEM_LUXURY_BALL,
#line 758
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 759
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_MUD_SLAP,
                MOVE_CHARM,
            },
            },
            {
#line 764
            .nickname = COMPOUND_STRING("Snowcone"),
#line 764
            .species = SPECIES_VANILLITE,
#line 764
            .gender = TRAINER_MON_MALE,
#line 764
            .heldItem = ITEM_ORAN_BERRY,
#line 767
            .ev = TRAINER_PARTY_EVS(3, 9, 6, 3, 3, 2),
#line 766
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 765
            .lvl = 19,
#line 768
            .ball = ITEM_GREAT_BALL,
#line 769
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 770
                MOVE_AURORA_BEAM,
                MOVE_ICY_WIND,
                MOVE_SHOCK_WAVE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 775
            .nickname = COMPOUND_STRING("Artoria"),
#line 775
            .species = SPECIES_SWABLU,
#line 775
            .gender = TRAINER_MON_FEMALE,
#line 775
            .heldItem = ITEM_ORAN_BERRY,
#line 778
            .ev = TRAINER_PARTY_EVS(7, 15, 18, 15, 15, 6),
#line 777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 776
            .lvl = 20,
#line 779
            .ball = ITEM_MOON_BALL,
#line 780
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 781
                MOVE_AIR_CUTTER,
                MOVE_TWISTER,
                MOVE_UPROAR,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 788
    [TRAINER_OC_R4_NEIL] =
    {
#line 789
        .trainerName = _("Neil"),
#line 790
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 791
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 793
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 794
        .items = { ITEM_POTION },
#line 795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 797
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 798
            .lvl = 15,
#line 799
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 801
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 802
            .lvl = 17,
#line 803
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 804
                MOVE_SHOCK_WAVE,
                MOVE_MAGNET_BOMB,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 809
            .species = SPECIES_MAKUHITA,
#line 809
            .gender = TRAINER_MON_MALE,
#line 812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 810
            .lvl = 19,
#line 811
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 813
    [TRAINER_OC_R4_BUZZ] =
    {
#line 814
        .trainerName = _("Buzz"),
#line 815
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 816
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 818
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 819
        .items = { ITEM_POTION },
#line 820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 822
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 823
            .lvl = 15,
#line 824
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 826
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 827
            .lvl = 17,
#line 828
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 829
                MOVE_SHOCK_WAVE,
                MOVE_MAGNET_BOMB,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 834
            .species = SPECIES_MEOWTH,
#line 834
            .gender = TRAINER_MON_MALE,
#line 837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 835
            .lvl = 19,
#line 836
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 838
    [TRAINER_OC_R4_MIKE] =
    {
#line 839
        .trainerName = _("Mike"),
#line 840
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 841
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender = 
#line 843
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 844
        .items = { ITEM_POTION },
#line 845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 847
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 848
            .lvl = 15,
#line 849
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 851
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 852
            .lvl = 17,
#line 853
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 854
                MOVE_SHOCK_WAVE,
                MOVE_MAGNET_BOMB,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 859
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 860
            .lvl = 19,
#line 861
            .ball = ITEM_MOON_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 863
    [TRAINER_OC_R4_WOODY] =
    {
#line 864
        .trainerName = _("Woody"),
#line 865
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 866
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 868
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 869
        .items = { ITEM_POTION },
#line 870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 872
            .species = SPECIES_LOMBRE,
#line 872
            .gender = TRAINER_MON_MALE,
#line 875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 873
            .lvl = 15,
#line 874
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 875
                MOVE_BUBBLE,
                MOVE_ABSORB,
                MOVE_FAKE_OUT,
                MOVE_SWIFT,
            },
            },
            {
#line 880
            .species = SPECIES_TIMBURR,
#line 880
            .gender = TRAINER_MON_MALE,
#line 883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 881
            .lvl = 16,
#line 882
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 884
            .species = SPECIES_ONIX,
#line 884
            .gender = TRAINER_MON_MALE,
#line 887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 885
            .lvl = 18,
#line 886
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 888
            .species = SPECIES_SANDILE,
#line 888
            .gender = TRAINER_MON_MALE,
#line 891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 889
            .lvl = 19,
#line 890
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 892
    [TRAINER_OC_R4_JESSIE] =
    {
#line 893
        .trainerName = _("Jessie"),
#line 894
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 895
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 896
F_TRAINER_FEMALE | 
#line 897
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 898
        .items = { ITEM_POTION },
#line 899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 901
            .species = SPECIES_LOMBRE,
#line 901
            .gender = TRAINER_MON_FEMALE,
#line 904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 902
            .lvl = 15,
#line 903
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 904
                MOVE_BUBBLE,
                MOVE_ABSORB,
                MOVE_FAKE_OUT,
                MOVE_SWIFT,
            },
            },
            {
#line 909
            .species = SPECIES_ZUBAT,
#line 909
            .gender = TRAINER_MON_FEMALE,
#line 913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 911
            .ability = ABILITY_INNER_FOCUS,
#line 910
            .lvl = 16,
#line 912
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 914
            .species = SPECIES_MEOWTH,
#line 914
            .gender = TRAINER_MON_FEMALE,
#line 917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 915
            .lvl = 18,
#line 916
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 918
            .species = SPECIES_SANDILE,
#line 918
            .gender = TRAINER_MON_FEMALE,
#line 921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 919
            .lvl = 19,
#line 920
            .ball = ITEM_SAFARI_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 924
    [TRAINER_OC_SPIDERCAVE_KNIGHT1] =
    {
#line 925
        .trainerName = _("Scout"),
#line 926
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 927
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 929
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 931
            .species = SPECIES_PAWNIARD,
#line 931
            .gender = TRAINER_MON_MALE,
#line 934
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 933
            .ability = ABILITY_DEFIANT,
#line 932
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 934
                MOVE_FEINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
            {
#line 939
            .species = SPECIES_PAWNIARD,
#line 939
            .gender = TRAINER_MON_MALE,
#line 942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 941
            .ability = ABILITY_DEFIANT,
#line 940
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 942
                MOVE_FEINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
        },
    },
#line 947
    [TRAINER_OC_SPIDERCAVE_KNIGHT2] =
    {
#line 948
        .trainerName = _("Scout"),
#line 949
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 950
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 952
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 954
            .species = SPECIES_SCRAGGY,
#line 954
            .gender = TRAINER_MON_MALE,
#line 956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 955
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 957
            .species = SPECIES_SCRAGGY,
#line 957
            .gender = TRAINER_MON_MALE,
#line 959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 958
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 960
    [TRAINER_OC_SPIDERCAVE_KNIGHT3] =
    {
#line 961
        .trainerName = _("Guard"),
#line 962
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 963
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 965
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 967
            .species = SPECIES_ARON,
#line 967
            .gender = TRAINER_MON_MALE,
#line 970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 969
            .ability = ABILITY_STURDY,
#line 968
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 971
            .species = SPECIES_ARON,
#line 971
            .gender = TRAINER_MON_MALE,
#line 974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 973
            .ability = ABILITY_STURDY,
#line 972
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 975
    [TRAINER_OC_SPIDERCAVE_KNIGHT4] =
    {
#line 976
        .trainerName = _("Guard"),
#line 977
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 978
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 980
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 982
            .species = SPECIES_ARON,
#line 982
            .gender = TRAINER_MON_MALE,
#line 985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 984
            .ability = ABILITY_STURDY,
#line 983
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 986
            .species = SPECIES_ARON,
#line 986
            .gender = TRAINER_MON_MALE,
#line 989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 988
            .ability = ABILITY_STURDY,
#line 987
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 990
    [TRAINER_OC_SPIDERCAVE_KNIGHT5] =
    {
#line 991
        .trainerName = _("Tunneler"),
#line 992
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 993
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 995
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 997
            .species = SPECIES_DIGLETT,
#line 997
            .gender = TRAINER_MON_MALE,
#line 1000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 999
            .ability = ABILITY_ARENA_TRAP,
#line 998
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1001
            .species = SPECIES_GEODUDE,
#line 1001
            .gender = TRAINER_MON_MALE,
#line 1004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1003
            .ability = ABILITY_STURDY,
#line 1002
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1005
    [TRAINER_OC_SPIDERCAVE_KNIGHT6] =
    {
#line 1006
        .trainerName = _("Tunneler"),
#line 1007
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 1008
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1010
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1012
            .species = SPECIES_DIGLETT,
#line 1012
            .gender = TRAINER_MON_MALE,
#line 1015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1014
            .ability = ABILITY_ARENA_TRAP,
#line 1013
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1016
            .species = SPECIES_RHYHORN,
#line 1016
            .gender = TRAINER_MON_MALE,
#line 1018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1017
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1019
    [TRAINER_OC_SPIDERCAVE_KNIGHT7] =
    {
#line 1020
        .trainerName = _("Tunneler"),
#line 1021
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 1022
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1024
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1026
            .species = SPECIES_DIGLETT,
#line 1026
            .gender = TRAINER_MON_MALE,
#line 1029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1028
            .ability = ABILITY_ARENA_TRAP,
#line 1027
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1030
            .species = SPECIES_RHYHORN,
#line 1030
            .gender = TRAINER_MON_MALE,
#line 1032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1031
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1033
    [TRAINER_OC_SPIDERCAVE_KNIGHT8] =
    {
#line 1034
        .trainerName = _("Sapper"),
#line 1035
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 1036
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1038
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1040
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1041
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1043
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1045
            .ability = ABILITY_MAGNET_PULL,
#line 1044
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1047
    [TRAINER_OC_SPIDERCAVE_KNIGHT9] =
    {
#line 1048
        .trainerName = _("Sapper"),
#line 1049
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 1050
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1052
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1054
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1055
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1057
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1059
            .ability = ABILITY_MAGNET_PULL,
#line 1058
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1063
    [TRAINER_OC_SPIDERCAVE_ADMIN] =
    {
#line 1064
        .trainerName = _("Specter"),
#line 1065
        .trainerClass = TRAINER_CLASS_FOREVER_LORD,
#line 1066
        .trainerPic = TRAINER_PIC_SPECTER,
        .encounterMusic_gender = 
#line 1068
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1069
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 1070
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
#line 1071
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1073
            .species = SPECIES_LAMPENT,
#line 1073
            .gender = TRAINER_MON_MALE,
#line 1073
            .heldItem = ITEM_SHUCA_BERRY,
#line 1076
            .ev = TRAINER_PARTY_EVS(12, 0, 12, 12, 12, 12),
#line 1075
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 6, 31, 31),
#line 1074
            .lvl = 23,
#line 1077
            .ball = ITEM_DUSK_BALL,
#line 1078
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1079
                MOVE_MYSTICAL_FIRE,
                MOVE_CONFUSE_RAY,
                MOVE_WILL_O_WISP,
                MOVE_CURSE,
            },
            },
            {
#line 1094
            .species = SPECIES_YAMASK,
#line 1094
            .gender = TRAINER_MON_MALE,
#line 1094
            .heldItem = ITEM_ORAN_BERRY,
#line 1097
            .ev = TRAINER_PARTY_EVS(12, 0, 12, 12, 12, 12),
#line 1096
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 6, 31, 31),
#line 1095
            .lvl = 25,
#line 1098
            .ball = ITEM_DUSK_BALL,
#line 1099
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1100
                MOVE_HEX,
                MOVE_SHOCK_WAVE,
                MOVE_DISABLE,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 1105
            .species = SPECIES_HONEDGE,
#line 1105
            .gender = TRAINER_MON_MALE,
#line 1105
            .heldItem = ITEM_SHUCA_BERRY,
#line 1108
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
#line 1107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 6, 31, 31),
#line 1106
            .lvl = 25,
#line 1109
            .ball = ITEM_DUSK_BALL,
#line 1110
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1111
                MOVE_CUT,
                MOVE_PURSUIT,
                MOVE_AERIAL_ACE,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1118
    [TRAINER_OC_R5_TRAINER1] =
    {
#line 1119
        .trainerName = _("Ivan"),
#line 1120
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1121
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1123
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1126
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1127
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1129
    [TRAINER_OC_R5_TRAINER2] =
    {
#line 1130
        .trainerName = _("Wicki"),
#line 1131
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1132
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1133
F_TRAINER_FEMALE | 
#line 1134
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1137
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1138
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1140
    [TRAINER_OC_R5_TRAINER3] =
    {
#line 1141
        .trainerName = _("Maggie"),
#line 1142
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1143
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1144
F_TRAINER_FEMALE | 
#line 1145
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1148
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1149
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1153
    [TRAINER_OC_R6_TETRIS] =
    {
#line 1154
        .trainerName = _("Alexey"),
#line 1155
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 1156
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 1158
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1159
        .items = { ITEM_SODA_POP, ITEM_SODA_POP },
#line 1160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1162
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1164
            .ability = ABILITY_GUTS,
#line 1163
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1166
            .species = SPECIES_POTATER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1167
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1169
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1171
            .ability = ABILITY_ANALYTIC,
#line 1170
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1173
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1175
            .ability = ABILITY_ANALYTIC,
#line 1174
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1177
    [TRAINER_OC_R6_REDIGIT] =
    {
#line 1178
        .trainerName = _("Andrew"),
#line 1179
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1182
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1183
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 1184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1186
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1188
            .ability = ABILITY_SHEER_FORCE,
#line 1187
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1189
                MOVE_LOW_KICK,
                MOVE_MUD_SLAP,
                MOVE_TACKLE,
                MOVE_LEER,
            },
            },
            {
#line 1194
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1196
            .ability = ABILITY_INTIMIDATE,
#line 1195
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1197
                MOVE_BULLDOZE,
                MOVE_FEINT_ATTACK,
                MOVE_TORMENT,
                MOVE_LEER,
            },
            },
            {
#line 1202
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1204
            .ability = ABILITY_MAGIC_GUARD,
#line 1203
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1206
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1207
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1209
    [TRAINER_OC_R6_STEVE] =
    {
#line 1210
        .trainerName = _("Steve"),
#line 1211
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1212
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1214
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1215
        .items = { ITEM_FRESH_WATER, ITEM_MOOMOO_MILK },
#line 1216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1218
            .species = SPECIES_TIMBURR,
#line 1218
            .gender = TRAINER_MON_MALE,
#line 1221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1220
            .ability = ABILITY_SHEER_FORCE,
#line 1219
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1222
            .species = SPECIES_SCRAGGY,
#line 1222
            .gender = TRAINER_MON_MALE,
#line 1225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1224
            .ability = ABILITY_INTIMIDATE,
#line 1223
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1226
            .species = SPECIES_GRAVELER,
#line 1226
            .gender = TRAINER_MON_MALE,
#line 1229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1228
            .ability = ABILITY_ROCK_HEAD,
#line 1227
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1230
            .species = SPECIES_LAIRON,
#line 1230
            .gender = TRAINER_MON_MALE,
#line 1233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1232
            .ability = ABILITY_ROCK_HEAD,
#line 1231
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1234
    [TRAINER_OC_R6_ALEX] =
    {
#line 1235
        .trainerName = _("Alex"),
#line 1236
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1237
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1238
F_TRAINER_FEMALE | 
#line 1239
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1240
        .items = { ITEM_FRESH_WATER, ITEM_MOOMOO_MILK },
#line 1241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1243
            .species = SPECIES_POTATER,
#line 1243
            .gender = TRAINER_MON_FEMALE,
#line 1245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1244
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1245
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_ABSORB,
                MOVE_GROWTH,
            },
            },
            {
#line 1250
            .species = SPECIES_EXEGGCUTE,
#line 1250
            .gender = TRAINER_MON_FEMALE,
#line 1253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1252
            .ability = ABILITY_HARVEST,
#line 1251
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1254
            .species = SPECIES_FLAAFFY,
#line 1254
            .gender = TRAINER_MON_FEMALE,
#line 1257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1256
            .ability = ABILITY_FLUFFY,
#line 1255
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1258
            .species = SPECIES_PILOSWINE,
#line 1258
            .gender = TRAINER_MON_FEMALE,
#line 1261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1260
            .ability = ABILITY_THICK_FAT,
#line 1259
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1264
    [TRAINER_OC_BADGE2HINT] =
    {
#line 1265
        .trainerName = _("Guide"),
#line 1266
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1267
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 1269
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1270
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1272
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
#line 1275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1274
            .ability = ABILITY_SOUNDPROOF,
#line 1273
            .lvl = 25,
#line 1277
            .ball = ITEM_NET_BALL,
#line 1278
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1279
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 1281
    [TRAINER_OC_GYM2_TRAINER1] =
    {
#line 1282
        .trainerName = _("Fiorung"),
#line 1283
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1284
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1285
F_TRAINER_FEMALE | 
#line 1286
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1288
            .species = SPECIES_JOLTIK,
#line 1288
            .gender = TRAINER_MON_FEMALE,
#line 1291
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1290
            .ability = ABILITY_UNNERVE,
#line 1289
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1293
            .species = SPECIES_PAWNIARD,
#line 1293
            .gender = TRAINER_MON_FEMALE,
#line 1296
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1295
            .ability = ABILITY_DEFIANT,
#line 1294
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1297
                MOVE_FEINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_GLARE,
                MOVE_PURSUIT,
            },
            },
            {
#line 1302
            .species = SPECIES_EELEKTRIK,
#line 1302
            .gender = TRAINER_MON_FEMALE,
#line 1304
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1303
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1305
                MOVE_CHARGE_BEAM,
                MOVE_BITE,
                MOVE_WRAP,
                MOVE_COIL,
            },
            },
        },
    },
#line 1310
    [TRAINER_OC_GYM2_TRAINER2] =
    {
#line 1311
        .trainerName = _("Nya"),
#line 1312
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 1313
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 1314
F_TRAINER_FEMALE | 
#line 1315
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1317
            .species = SPECIES_CHINCHOU,
#line 1317
            .gender = TRAINER_MON_FEMALE,
#line 1320
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1319
            .ability = ABILITY_WATER_ABSORB,
#line 1318
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1322
            .species = SPECIES_KOFFING,
#line 1322
            .gender = TRAINER_MON_FEMALE,
#line 1324
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1323
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1326
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1329
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1328
            .ability = ABILITY_TECHNICIAN,
#line 1327
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1330
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1335
    [TRAINER_OC_GYM2_TRAINER3] =
    {
#line 1336
        .trainerName = _("Glitter"),
#line 1337
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1338
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 1339
F_TRAINER_FEMALE | 
#line 1340
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1342
            .species = SPECIES_FLAAFFY,
#line 1342
            .gender = TRAINER_MON_FEMALE,
#line 1345
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1344
            .ability = ABILITY_STATIC,
#line 1343
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1347
            .species = SPECIES_DRIFLOON,
#line 1347
            .gender = TRAINER_MON_FEMALE,
#line 1349
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1348
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1351
            .species = SPECIES_VULPIX,
#line 1351
            .gender = TRAINER_MON_FEMALE,
#line 1353
            .ev = TRAINER_PARTY_EVS(8, 8, 8, 8, 8, 8),
#line 1354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1352
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1357
    [TRAINER_OC_BADGE2] =
    {
#line 1358
        .trainerName = _("Cooper"),
#line 1359
        .trainerClass = TRAINER_CLASS_GOVERNOR,
#line 1360
        .trainerPic = TRAINER_PIC_BADGE2,
        .encounterMusic_gender = 
#line 1362
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1363
        .items = { ITEM_SODA_POP, ITEM_SODA_POP, ITEM_SODA_POP },
#line 1364
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_WILL_SUICIDE | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
#line 1365
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1367
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1367
            .heldItem = ITEM_ORAN_BERRY,
#line 1371
            .ev = TRAINER_PARTY_EVS(16, 0, 16, 16, 16, 16),
#line 1370
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 7, 31, 31),
#line 1369
            .ability = ABILITY_ANALYTIC,
#line 1368
            .lvl = 23,
#line 1372
            .ball = ITEM_REPEAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1373
                MOVE_CHARGE_BEAM,
                MOVE_SHOCK_WAVE,
                MOVE_MAGNET_BOMB,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 1378
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .heldItem = ITEM_ORAN_BERRY,
#line 1382
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 0, 16),
#line 1381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 7, 0, 31),
#line 1380
            .ability = ABILITY_POISON_TOUCH,
#line 1379
            .lvl = 25,
#line 1383
            .ball = ITEM_REPEAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1384
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_MINIMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 1389
            .nickname = COMPOUND_STRING("Monad"),
#line 1389
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1389
            .heldItem = ITEM_CHOICE_SPECS,
#line 1393
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
#line 1392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1391
            .ability = ABILITY_SOUNDPROOF,
#line 1390
            .lvl = 27,
#line 1394
            .ball = ITEM_REPEAT_BALL,
#line 1395
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1396
                MOVE_EMP_SPLOSION,
            },
            },
        },
    },
#line 1400
    [TRAINER_OC_R7_LIZARD] =
    {
#line 1401
        .trainerName = _("Carla"),
#line 1402
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1403
        .trainerPic = TRAINER_PIC_COOLTRAINER_FB,
        .encounterMusic_gender = 
#line 1404
F_TRAINER_FEMALE | 
#line 1405
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1406
        .items = { ITEM_SUPER_POTION, ITEM_FRESH_WATER, ITEM_PARALYZE_HEAL, ITEM_X_ATTACK },
#line 1407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1409
            .species = SPECIES_AXEW,
#line 1409
            .gender = TRAINER_MON_FEMALE,
#line 1414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1413
            .ability = ABILITY_UNNERVE,
#line 1410
            .lvl = 21,
#line 1411
            .ball = ITEM_REPEAT_BALL,
#line 1412
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1414
                MOVE_TWISTER,
                MOVE_DOUBLE_KICK,
                MOVE_BITE,
                MOVE_LEER,
            },
            },
            {
#line 1419
            .species = SPECIES_SCRAGGY,
#line 1419
            .gender = TRAINER_MON_FEMALE,
#line 1423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1420
            .lvl = 23,
#line 1421
            .ball = ITEM_REPEAT_BALL,
#line 1422
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1424
            .species = SPECIES_KROKOROK,
#line 1424
            .gender = TRAINER_MON_FEMALE,
#line 1428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1425
            .lvl = 25,
#line 1426
            .ball = ITEM_REPEAT_BALL,
#line 1427
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1429
    [TRAINER_OC_R7_SAND] =
    {
#line 1430
        .trainerName = _("Flint"),
#line 1431
        .trainerClass = TRAINER_CLASS_ENGINEER,
#line 1432
        .trainerPic = TRAINER_PIC_ENGINEER,
        .encounterMusic_gender = 
#line 1434
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1435
        .items = { ITEM_FRESH_WATER, ITEM_POTION, ITEM_ANTIDOTE, ITEM_X_DEFENSE },
#line 1436
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1438
            .species = SPECIES_GOLETT,
#line 1438
            .gender = TRAINER_MON_MALE,
#line 1438
            .heldItem = ITEM_SOFT_SAND,
#line 1442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1439
            .lvl = 21,
#line 1440
            .ball = ITEM_HEAVY_BALL,
#line 1441
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1443
            .species = SPECIES_BALTOY,
#line 1443
            .gender = TRAINER_MON_MALE,
#line 1443
            .heldItem = ITEM_SOFT_SAND,
#line 1447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1444
            .lvl = 23,
#line 1445
            .ball = ITEM_HEAVY_BALL,
#line 1446
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1447
                MOVE_MAGNITUDE,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1452
            .species = SPECIES_GRAVELER,
#line 1452
            .gender = TRAINER_MON_MALE,
#line 1452
            .heldItem = ITEM_SOFT_SAND,
#line 1456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1453
            .lvl = 25,
#line 1454
            .ball = ITEM_HEAVY_BALL,
#line 1455
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1456
                MOVE_MAGNITUDE,
                MOVE_MUD_SLAP,
                MOVE_SANDSTORM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 1461
    [TRAINER_OC_R7_SPIDEY] =
    {
#line 1462
        .trainerName = _("Peter"),
#line 1463
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1464
        .trainerPic = TRAINER_PIC_PETER,
        .encounterMusic_gender = 
#line 1466
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 1467
        .items = { ITEM_POTION, ITEM_SUPER_POTION, ITEM_FRESH_WATER, ITEM_SODA_POP },
#line 1468
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_ACE_POKEMON | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES,
#line 1469
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1471
            .species = SPECIES_SWADLOON,
#line 1471
            .gender = TRAINER_MON_MALE,
#line 1471
            .heldItem = ITEM_SILVER_POWDER,
#line 1475
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 16, 16),
#line 1474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1473
            .ability = ABILITY_LEAF_GUARD,
#line 1472
            .lvl = 24,
#line 1476
            .ball = ITEM_NET_BALL,
#line 1477
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1478
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_PIN_MISSILE,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 1483
            .species = SPECIES_RIOLU,
#line 1483
            .gender = TRAINER_MON_MALE,
#line 1483
            .heldItem = ITEM_BLACK_BELT,
#line 1487
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 16, 16),
#line 1486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1485
            .ability = ABILITY_STEADFAST,
#line 1484
            .lvl = 24,
#line 1488
            .ball = ITEM_GREAT_BALL,
#line 1489
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1490
                MOVE_KARATE_CHOP,
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_COUNTER,
            },
            },
            {
#line 1495
            .species = SPECIES_JOLTIK,
#line 1495
            .gender = TRAINER_MON_MALE,
#line 1495
            .heldItem = ITEM_MAGNET,
#line 1499
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 16, 16),
#line 1498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1497
            .ability = ABILITY_COMPOUND_EYES,
#line 1496
            .lvl = 25,
#line 1500
            .ball = ITEM_NET_BALL,
#line 1501
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1502
                MOVE_FLASH,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
                MOVE_STRING_SHOT,
            },
            },
        },
    },
#line 1507
    [TRAINER_OC_R7_GOBLIN] =
    {
#line 1508
        .trainerName = _("Norman"),
#line 1509
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1510
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 1512
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1513
        .items = { ITEM_HYPER_POTION, ITEM_X_ATTACK, ITEM_X_SPECIAL, ITEM_X_SPEED },
#line 1514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_WILL_SUICIDE | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1516
            .species = SPECIES_KOFFING,
#line 1516
            .gender = TRAINER_MON_MALE,
#line 1520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1517
            .lvl = 21,
#line 1518
            .ball = ITEM_LUXURY_BALL,
#line 1519
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1521
            .species = SPECIES_PAWNIARD,
#line 1521
            .gender = TRAINER_MON_MALE,
#line 1526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1523
            .ability = ABILITY_PRESSURE,
#line 1522
            .lvl = 22,
#line 1524
            .ball = ITEM_LUXURY_BALL,
#line 1525
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1526
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_TORMENT,
                MOVE_PURSUIT,
            },
            },
            {
#line 1531
            .species = SPECIES_TYRUNT,
#line 1531
            .gender = TRAINER_MON_MALE,
#line 1536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1533
            .ability = ABILITY_STRONG_JAW,
#line 1532
            .lvl = 23,
#line 1534
            .ball = ITEM_LUXURY_BALL,
#line 1535
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1537
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1539
            .ability = ABILITY_SOUNDPROOF,
#line 1538
            .lvl = 25,
#line 1540
            .ball = ITEM_LUXURY_BALL,
#line 1541
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1542
                MOVE_SHOCK_WAVE,
                MOVE_MEGA_DRAIN,
                MOVE_CHARGE_BEAM,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 1547
    [TRAINER_OC_R7_OCTOPUS] =
    {
#line 1548
        .trainerName = _("Olivia"),
#line 1549
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1550
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1551
F_TRAINER_FEMALE | 
#line 1552
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1553
        .items = { ITEM_SUPER_POTION, ITEM_LEMONADE, ITEM_PARALYZE_HEAL, ITEM_X_SPECIAL },
#line 1554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1556
            .species = SPECIES_VULPIX,
#line 1556
            .gender = TRAINER_MON_FEMALE,
#line 1560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1557
            .lvl = 21,
#line 1558
            .ball = ITEM_REPEAT_BALL,
#line 1559
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1560
                MOVE_MYSTICAL_FIRE,
                MOVE_PSYBEAM,
                MOVE_CONFUSE_RAY,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 1565
            .species = SPECIES_TENTACOOL,
#line 1565
            .gender = TRAINER_MON_FEMALE,
#line 1570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1567
            .ability = ABILITY_RAIN_DISH,
#line 1566
            .lvl = 22,
#line 1568
            .ball = ITEM_REPEAT_BALL,
#line 1569
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1571
            .species = SPECIES_OMANYTE,
#line 1571
            .gender = TRAINER_MON_FEMALE,
#line 1576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1573
            .ability = ABILITY_SWIFT_SWIM,
#line 1572
            .lvl = 23,
#line 1574
            .ball = ITEM_REPEAT_BALL,
#line 1575
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1577
            .species = SPECIES_OCTILLERY,
#line 1577
            .gender = TRAINER_MON_FEMALE,
#line 1582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1579
            .ability = ABILITY_ANALYTIC,
#line 1578
            .lvl = 25,
#line 1580
            .ball = ITEM_REPEAT_BALL,
#line 1581
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1582
                MOVE_OCTAZOOKA,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 1587
    [TRAINER_OC_R7_ELECTRO] =
    {
#line 1588
        .trainerName = _("Max"),
#line 1589
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 1590
        .trainerPic = TRAINER_PIC_SCIENTIST_A,
        .encounterMusic_gender = 
#line 1592
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1593
        .items = { ITEM_SODA_POP, ITEM_X_ATTACK, ITEM_X_SPECIAL, ITEM_X_SPEED },
#line 1594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1596
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1598
            .ability = ABILITY_MAGNET_PULL,
#line 1597
            .lvl = 22,
#line 1599
            .ball = ITEM_REPEAT_BALL,
#line 1600
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1601
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 1606
            .species = SPECIES_CHINCHOU,
#line 1606
            .gender = TRAINER_MON_MALE,
#line 1611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1608
            .ability = ABILITY_VOLT_ABSORB,
#line 1607
            .lvl = 24,
#line 1609
            .ball = ITEM_REPEAT_BALL,
#line 1610
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1611
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER_SHOCK,
                MOVE_BUBBLE_BEAM,
            },
            },
            {
#line 1616
            .species = SPECIES_EELEKTRIK,
#line 1616
            .gender = TRAINER_MON_MALE,
#line 1620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1617
            .lvl = 26,
#line 1618
            .ball = ITEM_REPEAT_BALL,
#line 1619
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1620
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_BITE,
            },
            },
        },
    },
#line 1627
    [TRAINER_OC_R8E_DESERT] =
    {
#line 1628
        .trainerName = _("Sahara"),
#line 1629
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1630
        .trainerPic = TRAINER_PIC_PICNICKER_A,
        .encounterMusic_gender = 
#line 1631
F_TRAINER_FEMALE | 
#line 1632
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1634
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1634
            .heldItem = ITEM_SOFT_SAND,
#line 1636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1635
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1637
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .heldItem = ITEM_SHUCA_BERRY,
#line 1639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1638
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1640
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1640
            .heldItem = ITEM_SOFT_SAND,
#line 1642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1641
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1643
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1643
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 1645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1644
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1646
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1646
            .heldItem = ITEM_SHUCA_BERRY,
#line 1648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1647
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1649
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1649
            .heldItem = ITEM_SOFT_SAND,
#line 1651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1650
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1654
    [TRAINER_OC_DWARF1] =
    {
#line 1655
        .trainerName = _("Doc"),
#line 1656
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1657
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1659
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1660
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1662
            .species = SPECIES_TIMBURR,
#line 1662
            .gender = TRAINER_MON_MALE,
#line 1662
            .heldItem = ITEM_HARD_STONE,
#line 1666
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1665
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1663
            .lvl = 20,
#line 1664
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1667
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1672
            .species = SPECIES_DIGLETT,
#line 1672
            .gender = TRAINER_MON_MALE,
#line 1672
            .heldItem = ITEM_RINDO_BERRY,
#line 1676
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1675
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1673
            .lvl = 20,
#line 1674
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1677
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1682
            .species = SPECIES_GRAVELER,
#line 1682
            .gender = TRAINER_MON_MALE,
#line 1682
            .heldItem = ITEM_HARD_STONE,
#line 1686
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1685
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1683
            .lvl = 25,
#line 1684
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1687
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1692
            .species = SPECIES_EXEGGCUTE,
#line 1692
            .gender = TRAINER_MON_MALE,
#line 1692
            .heldItem = ITEM_ORAN_BERRY,
#line 1696
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1695
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1693
            .lvl = 25,
#line 1694
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1697
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSION,
                MOVE_LEECH_SEED,
                MOVE_REFLECT,
            },
            },
        },
    },
#line 1702
    [TRAINER_OC_DWARF2] =
    {
#line 1703
        .trainerName = _("Grumpy"),
#line 1704
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1705
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1707
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1708
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1710
            .species = SPECIES_TIMBURR,
#line 1710
            .gender = TRAINER_MON_MALE,
#line 1710
            .heldItem = ITEM_HARD_STONE,
#line 1714
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1713
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1711
            .lvl = 20,
#line 1712
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1715
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1720
            .species = SPECIES_DIGLETT,
#line 1720
            .gender = TRAINER_MON_MALE,
#line 1720
            .heldItem = ITEM_RINDO_BERRY,
#line 1724
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1723
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1721
            .lvl = 20,
#line 1722
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1725
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1730
            .species = SPECIES_GRAVELER,
#line 1730
            .gender = TRAINER_MON_MALE,
#line 1730
            .heldItem = ITEM_HARD_STONE,
#line 1734
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1733
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1731
            .lvl = 25,
#line 1732
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1735
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1740
            .species = SPECIES_RHYHORN,
#line 1740
            .gender = TRAINER_MON_MALE,
#line 1740
            .heldItem = ITEM_ORAN_BERRY,
#line 1744
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1743
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1741
            .lvl = 25,
#line 1742
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1745
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_HEADBUTT,
            },
            },
        },
    },
#line 1750
    [TRAINER_OC_DWARF3] =
    {
#line 1751
        .trainerName = _("Happy"),
#line 1752
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1753
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1755
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1756
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1758
            .species = SPECIES_TIMBURR,
#line 1758
            .gender = TRAINER_MON_MALE,
#line 1758
            .heldItem = ITEM_HARD_STONE,
#line 1762
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1761
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1759
            .lvl = 20,
#line 1760
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1763
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1768
            .species = SPECIES_DIGLETT,
#line 1768
            .gender = TRAINER_MON_MALE,
#line 1768
            .heldItem = ITEM_RINDO_BERRY,
#line 1772
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1771
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1769
            .lvl = 20,
#line 1770
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1773
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1778
            .species = SPECIES_GRAVELER,
#line 1778
            .gender = TRAINER_MON_MALE,
#line 1778
            .heldItem = ITEM_HARD_STONE,
#line 1782
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1781
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1779
            .lvl = 25,
#line 1780
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1783
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1788
            .species = SPECIES_TOGETIC,
#line 1788
            .gender = TRAINER_MON_MALE,
#line 1788
            .heldItem = ITEM_ORAN_BERRY,
#line 1793
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1792
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1791
            .ability = ABILITY_SERENE_GRACE,
#line 1789
            .lvl = 25,
#line 1790
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1794
                MOVE_DISARMING_VOICE,
                MOVE_AIR_CUTTER,
                MOVE_CHARM,
                MOVE_SOFT_BOILED,
            },
            },
        },
    },
#line 1799
    [TRAINER_OC_DWARF4] =
    {
#line 1800
        .trainerName = _("Sleepy"),
#line 1801
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1802
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1804
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1805
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1807
            .species = SPECIES_TIMBURR,
#line 1807
            .gender = TRAINER_MON_MALE,
#line 1807
            .heldItem = ITEM_HARD_STONE,
#line 1811
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1810
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1808
            .lvl = 20,
#line 1809
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1812
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1817
            .species = SPECIES_DIGLETT,
#line 1817
            .gender = TRAINER_MON_MALE,
#line 1817
            .heldItem = ITEM_RINDO_BERRY,
#line 1821
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1820
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1818
            .lvl = 20,
#line 1819
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1822
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1827
            .species = SPECIES_GRAVELER,
#line 1827
            .gender = TRAINER_MON_MALE,
#line 1827
            .heldItem = ITEM_HARD_STONE,
#line 1831
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1830
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1828
            .lvl = 25,
#line 1829
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1832
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1837
            .species = SPECIES_SHROOMISH,
#line 1837
            .gender = TRAINER_MON_MALE,
#line 1837
            .heldItem = ITEM_ORAN_BERRY,
#line 1841
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1840
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1838
            .lvl = 25,
#line 1839
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1842
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 1847
    [TRAINER_OC_DWARF5] =
    {
#line 1848
        .trainerName = _("Bashful"),
#line 1849
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1850
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1853
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1855
            .species = SPECIES_TIMBURR,
#line 1855
            .gender = TRAINER_MON_MALE,
#line 1855
            .heldItem = ITEM_HARD_STONE,
#line 1859
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1858
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1856
            .lvl = 20,
#line 1857
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1860
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1865
            .species = SPECIES_DIGLETT,
#line 1865
            .gender = TRAINER_MON_MALE,
#line 1865
            .heldItem = ITEM_RINDO_BERRY,
#line 1869
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1868
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1866
            .lvl = 20,
#line 1867
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1870
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1875
            .species = SPECIES_GRAVELER,
#line 1875
            .gender = TRAINER_MON_MALE,
#line 1875
            .heldItem = ITEM_HARD_STONE,
#line 1879
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1878
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1876
            .lvl = 25,
#line 1877
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1880
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1885
            .species = SPECIES_PALPITOAD,
#line 1885
            .gender = TRAINER_MON_MALE,
#line 1885
            .heldItem = ITEM_ORAN_BERRY,
#line 1889
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1888
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1886
            .lvl = 25,
#line 1887
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1890
                MOVE_BUBBLE_BEAM,
                MOVE_AQUA_JET,
                MOVE_DIG,
                MOVE_MUD_SHOT,
            },
            },
        },
    },
#line 1895
    [TRAINER_OC_DWARF6] =
    {
#line 1896
        .trainerName = _("Sneezy"),
#line 1897
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1898
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1900
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1901
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1903
            .species = SPECIES_TIMBURR,
#line 1903
            .gender = TRAINER_MON_MALE,
#line 1903
            .heldItem = ITEM_HARD_STONE,
#line 1907
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1906
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1904
            .lvl = 20,
#line 1905
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1908
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1913
            .species = SPECIES_DIGLETT,
#line 1913
            .gender = TRAINER_MON_MALE,
#line 1913
            .heldItem = ITEM_RINDO_BERRY,
#line 1917
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1916
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1914
            .lvl = 20,
#line 1915
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1918
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1923
            .species = SPECIES_GRAVELER,
#line 1923
            .gender = TRAINER_MON_MALE,
#line 1923
            .heldItem = ITEM_HARD_STONE,
#line 1927
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1926
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1924
            .lvl = 25,
#line 1925
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1928
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1933
            .species = SPECIES_WEEPINBELL,
#line 1933
            .gender = TRAINER_MON_MALE,
#line 1933
            .heldItem = ITEM_ORAN_BERRY,
#line 1937
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1936
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1934
            .lvl = 25,
#line 1935
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1938
                MOVE_SLUDGE,
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_SLEEP_POWDER,
            },
            },
        },
    },
#line 1943
    [TRAINER_OC_DWARF7] =
    {
#line 1944
        .trainerName = _("Dopey"),
#line 1945
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1946
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 1948
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1949
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1951
            .species = SPECIES_TIMBURR,
#line 1951
            .gender = TRAINER_MON_MALE,
#line 1951
            .heldItem = ITEM_HARD_STONE,
#line 1955
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1954
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1952
            .lvl = 20,
#line 1953
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1956
                MOVE_LOW_KICK,
                MOVE_MACH_PUNCH,
                MOVE_ROCK_THROW,
                MOVE_DIG,
            },
            },
            {
#line 1961
            .species = SPECIES_DIGLETT,
#line 1961
            .gender = TRAINER_MON_MALE,
#line 1961
            .heldItem = ITEM_RINDO_BERRY,
#line 1965
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1964
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1962
            .lvl = 20,
#line 1963
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1966
                MOVE_MAGNITUDE,
                MOVE_DIG,
                MOVE_BULLDOZE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1971
            .species = SPECIES_GRAVELER,
#line 1971
            .gender = TRAINER_MON_MALE,
#line 1971
            .heldItem = ITEM_HARD_STONE,
#line 1975
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1974
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1972
            .lvl = 25,
#line 1973
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1976
                MOVE_ROCK_TOMB,
                MOVE_ROLLOUT,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 1981
            .species = SPECIES_SLOWPOKE,
#line 1981
            .gender = TRAINER_MON_MALE,
#line 1981
            .heldItem = ITEM_ORAN_BERRY,
#line 1985
            .ev = TRAINER_PARTY_EVS(49, 49, 49, 49, 49, 49),
#line 1984
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 1982
            .lvl = 25,
#line 1983
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1986
                MOVE_WATER_PULSE,
                MOVE_ZEN_HEADBUTT,
                MOVE_DISABLE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1993
    [TRAINER_OC_R8W_LAVA] =
    {
#line 1994
        .trainerName = _("Nathan"),
#line 1995
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1996
        .trainerPic = TRAINER_PIC_YOUNGSTER_C,
        .encounterMusic_gender = 
#line 1998
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1999
        .items = { ITEM_LAVA_COOKIE, ITEM_LAVA_COOKIE, ITEM_LAVA_COOKIE },
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2001
            .species = SPECIES_ZIGZAGOON,
#line 2001
            .gender = TRAINER_MON_MALE,
#line 2004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2002
            .lvl = 19,
#line 2003
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2004
                MOVE_HEADBUTT,
                MOVE_BITE,
                MOVE_LICK,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 2009
            .species = SPECIES_MEOWTH,
#line 2009
            .gender = TRAINER_MON_MALE,
#line 2013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2011
            .ability = ABILITY_TECHNICIAN,
#line 2010
            .lvl = 20,
#line 2012
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2013
                MOVE_FAKE_OUT,
                MOVE_PAY_DAY,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2018
            .species = SPECIES_HOUNDOUR,
#line 2018
            .gender = TRAINER_MON_MALE,
#line 2022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2020
            .ability = ABILITY_UNNERVE,
#line 2019
            .lvl = 24,
#line 2021
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2022
                MOVE_BITE,
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_ROAR,
            },
            },
        },
    },
#line 2027
    [TRAINER_OC_R8W_IRON] =
    {
#line 2028
        .trainerName = _("Ferrigno"),
#line 2029
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2030
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 2032
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2033
        .items = { ITEM_SODA_POP },
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2035
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2035
            .heldItem = ITEM_METAL_COAT,
#line 2038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2037
            .ability = ABILITY_MAGNET_PULL,
#line 2036
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2038
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_THUNDER_WAVE,
                MOVE_MAGNET_BOMB,
            },
            },
            {
#line 2043
            .species = SPECIES_HONEDGE,
#line 2043
            .gender = TRAINER_MON_MALE,
#line 2043
            .heldItem = ITEM_METAL_COAT,
#line 2045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2044
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2045
                MOVE_METAL_CLAW,
                MOVE_CURSE,
                MOVE_AERIAL_ACE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2050
            .species = SPECIES_LAIRON,
#line 2050
            .gender = TRAINER_MON_MALE,
#line 2050
            .heldItem = ITEM_METAL_COAT,
#line 2053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2052
            .ability = ABILITY_STURDY,
#line 2051
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2054
            .species = SPECIES_PAWNIARD,
#line 2054
            .gender = TRAINER_MON_MALE,
#line 2054
            .heldItem = ITEM_METAL_COAT,
#line 2057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2056
            .ability = ABILITY_PRESSURE,
#line 2055
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2057
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_PURSUIT,
                MOVE_TORMENT,
            },
            },
        },
    },
#line 2062
    [TRAINER_OC_SCHOOL_GIAN] =
    {
#line 2063
        .trainerName = _("Gian"),
#line 2064
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2065
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 2067
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2068
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 2069
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2071
            .species = SPECIES_GRIMER,
#line 2071
            .gender = TRAINER_MON_MALE,
#line 2071
            .heldItem = ITEM_MYSTIC_WATER,
#line 2075
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2074
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2073
            .ability = ABILITY_POISON_TOUCH,
#line 2072
            .lvl = 22,
#line 2076
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2077
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_WATER_PULSE,
                MOVE_DISABLE,
            },
            },
            {
#line 2082
            .species = SPECIES_KERNEL_PULT,
#line 2082
            .gender = TRAINER_MON_MALE,
#line 2082
            .heldItem = ITEM_MIRACLE_SEED,
#line 2085
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2084
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2083
            .lvl = 22,
#line 2086
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2087
                MOVE_BUTTER,
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2092
    [TRAINER_OC_SCHOOL_HENRI] =
    {
#line 2093
        .trainerName = _("Henri"),
#line 2094
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2095
        .trainerPic = TRAINER_PIC_COOLTRAINER_MC,
        .encounterMusic_gender = 
#line 2097
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2098
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2100
            .species = SPECIES_VULPIX,
#line 2100
            .gender = TRAINER_MON_MALE,
#line 2100
            .heldItem = ITEM_WISE_GLASSES,
#line 2103
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2102
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2101
            .lvl = 22,
#line 2104
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2105
                MOVE_MYSTICAL_FIRE,
                MOVE_PSYBEAM,
                MOVE_SUNNY_DAY,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 2110
            .species = SPECIES_SWADLOON,
#line 2110
            .gender = TRAINER_MON_MALE,
#line 2110
            .heldItem = ITEM_FOCUS_SASH,
#line 2114
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2113
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2112
            .ability = ABILITY_CHLOROPHYLL,
#line 2111
            .lvl = 22,
#line 2115
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2116
                MOVE_PIN_MISSILE,
                MOVE_RAZOR_LEAF,
                MOVE_SWORDS_DANCE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 2121
    [TRAINER_OC_SCHOOL_ANGELO] =
    {
#line 2122
        .trainerName = _("Angelo"),
#line 2123
        .trainerClass = TRAINER_CLASS_WIZARD,
#line 2124
        .trainerPic = TRAINER_PIC_PSYCHIC_MB,
        .encounterMusic_gender = 
#line 2126
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2127
        .items = { ITEM_FRESH_WATER },
#line 2128
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2130
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2133
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2132
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2131
            .lvl = 22,
#line 2134
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2135
                MOVE_WATER_PULSE,
                MOVE_BITE,
                MOVE_THRASH,
                MOVE_TACKLE,
            },
            },
            {
#line 2140
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2143
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2142
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2141
            .lvl = 22,
#line 2144
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2145
                MOVE_ICE_BALL,
                MOVE_POWDER_SNOW,
                MOVE_BUBBLE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2150
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2153
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2152
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2151
            .lvl = 22,
#line 2154
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2155
                MOVE_DISARMING_VOICE,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_METRONOME,
            },
            },
            {
#line 2160
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2163
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2162
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2161
            .lvl = 22,
#line 2164
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2166
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2169
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2168
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2167
            .lvl = 22,
#line 2170
            .ball = ITEM_ULTRA_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2172
    [TRAINER_OC_SCHOOL_NICK] =
    {
#line 2173
        .trainerName = _("Nick"),
#line 2174
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2175
        .trainerPic = TRAINER_PIC_CAMPER_B,
        .encounterMusic_gender = 
#line 2177
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2178
        .items = { ITEM_FRESH_WATER },
#line 2179
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2181
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2184
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2183
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2182
            .lvl = 22,
#line 2185
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2187
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2190
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2189
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2188
            .lvl = 22,
#line 2191
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2193
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2196
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2195
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2194
            .lvl = 22,
#line 2197
            .ball = ITEM_LUXURY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2198
                MOVE_ICE_BALL,
                MOVE_POWDER_SNOW,
                MOVE_BUBBLE,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 2203
    [TRAINER_OC_SCHOOL_LORENZO] =
    {
#line 2204
        .trainerName = _("Lorenzo"),
#line 2205
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 2206
        .trainerPic = TRAINER_PIC_RANGER_MB,
        .encounterMusic_gender = 
#line 2208
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2209
        .items = { ITEM_FRESH_WATER },
#line 2210
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2212
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2215
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2214
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2213
            .lvl = 22,
#line 2216
            .ball = ITEM_HEAL_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2217
                MOVE_FEINT_ATTACK,
                MOVE_ICY_WIND,
                MOVE_METAL_CLAW,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 2222
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2225
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2224
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2223
            .lvl = 22,
#line 2226
            .ball = ITEM_HEAL_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2227
                MOVE_MAGICAL_LEAF,
                MOVE_DISARMING_VOICE,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2232
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2235
            .ev = TRAINER_PARTY_EVS(22, 22, 22, 22, 22, 22),
#line 2234
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 2233
            .lvl = 22,
#line 2236
            .ball = ITEM_HEAL_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2237
                MOVE_BUBBLE_BEAM,
                MOVE_BITE,
                MOVE_IRON_DEFENSE,
                MOVE_DOUBLE_EDGE,
            },
            },
        },
    },
#line 2245
    [TRAINER_OC_R8_LEE] =
    {
#line 2246
        .trainerName = _("Sawamura"),
#line 2247
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2248
        .trainerPic = TRAINER_PIC_BLACK_BELT_C,
        .encounterMusic_gender = 
#line 2250
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2252
        .items = { ITEM_FRESH_WATER },
#line 2251
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2254
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2254
            .heldItem = ITEM_COBA_BERRY,
#line 2257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2255
            .lvl = 25,
#line 2258
            .ball = ITEM_GREAT_BALL,
#line 2256
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2259
                MOVE_BRICK_BREAK,
                MOVE_BLAZE_KICK,
                MOVE_LOW_KICK,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 2264
    [TRAINER_OC_R8_CHAN] =
    {
#line 2265
        .trainerName = _("Ebihara"),
#line 2266
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2267
        .trainerPic = TRAINER_PIC_BLACK_BELT_C,
        .encounterMusic_gender = 
#line 2269
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2271
        .items = { ITEM_FRESH_WATER },
#line 2270
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2273
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2273
            .heldItem = ITEM_PAYAPA_BERRY,
#line 2276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2274
            .lvl = 25,
#line 2277
            .ball = ITEM_GREAT_BALL,
#line 2275
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2278
                MOVE_DRAIN_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_MACH_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 2283
    [TRAINER_OC_R8_TOP] =
    {
#line 2284
        .trainerName = _("Lloyd"),
#line 2285
        .trainerClass = TRAINER_CLASS_NINJA,
#line 2286
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2288
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2290
        .items = { ITEM_FRESH_WATER },
#line 2289
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2292
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2292
            .heldItem = ITEM_ROSELI_BERRY,
#line 2295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2293
            .lvl = 25,
#line 2296
            .ball = ITEM_GREAT_BALL,
#line 2294
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2297
                MOVE_TRIPLE_KICK,
                MOVE_MACH_PUNCH,
                MOVE_BULLET_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 2302
    [TRAINER_OC_B3_K1] =
    {
#line 2303
        .trainerName = _("Scout"),
#line 2304
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 2305
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2307
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2309
            .species = SPECIES_PAWNIARD,
#line 2309
            .gender = TRAINER_MON_MALE,
#line 2311
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2310
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2311
                MOVE_FEINT_ATTACK,
                MOVE_PURSUIT,
                MOVE_METAL_CLAW,
                MOVE_GLARE,
            },
            },
            {
#line 2316
            .species = SPECIES_CORPHISH,
#line 2316
            .gender = TRAINER_MON_MALE,
#line 2318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2317
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2319
    [TRAINER_OC_B3_K2] =
    {
#line 2320
        .trainerName = _("Guard"),
#line 2321
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 2322
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2324
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2326
            .species = SPECIES_ARON,
#line 2326
            .gender = TRAINER_MON_MALE,
#line 2328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2327
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2329
            .species = SPECIES_SHELLDER,
#line 2329
            .gender = TRAINER_MON_MALE,
#line 2331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2330
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2331
                MOVE_WATER_PULSE,
                MOVE_CLAMP,
                MOVE_AURORA_BEAM,
                MOVE_LEER,
            },
            },
        },
    },
#line 2336
    [TRAINER_OC_B3_K3] =
    {
#line 2337
        .trainerName = _("Diver"),
#line 2338
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 2339
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2341
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2342
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER },
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2344
            .species = SPECIES_CHINCHOU,
#line 2344
            .gender = TRAINER_MON_MALE,
#line 2346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2345
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2346
                MOVE_BUBBLE_BEAM,
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 2351
            .species = SPECIES_TENTACOOL,
#line 2351
            .gender = TRAINER_MON_MALE,
#line 2353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2352
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2354
            .species = SPECIES_CORPHISH,
#line 2354
            .gender = TRAINER_MON_MALE,
#line 2356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2355
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2357
    [TRAINER_OC_B3_K4] =
    {
#line 2358
        .trainerName = _("Diver"),
#line 2359
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 2360
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2362
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2363
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER },
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2365
            .species = SPECIES_CHINCHOU,
#line 2365
            .gender = TRAINER_MON_MALE,
#line 2367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2366
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2367
                MOVE_BUBBLE_BEAM,
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 2372
            .species = SPECIES_TENTACOOL,
#line 2372
            .gender = TRAINER_MON_MALE,
#line 2374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2373
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2375
            .species = SPECIES_CORPHISH,
#line 2375
            .gender = TRAINER_MON_MALE,
#line 2377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2376
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2378
    [TRAINER_OC_B3_K5] =
    {
#line 2379
        .trainerName = _("Lieutenant"),
#line 2380
        .trainerClass = TRAINER_CLASS_FOREVER_KN,
#line 2381
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2383
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2384
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER },
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2386
            .species = SPECIES_STARYU,
#line 2386
            .gender = TRAINER_MON_MALE,
#line 2388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2387
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2388
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_SWIFT,
                MOVE_RECOVER,
            },
            },
            {
#line 2393
            .species = SPECIES_CORPHISH,
#line 2393
            .gender = TRAINER_MON_MALE,
#line 2395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2394
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2396
            .species = SPECIES_LAIRON,
#line 2396
            .gender = TRAINER_MON_MALE,
#line 2398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2397
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2399
            .species = SPECIES_GYARADOS,
#line 2399
            .gender = TRAINER_MON_MALE,
#line 2401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2400
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2401
                MOVE_WATER_PULSE,
                MOVE_BITE,
                MOVE_TWISTER,
                MOVE_THRASH,
            },
            },
        },
    },
#line 2406
    [TRAINER_OC_B3_ADMIN3] =
    {
#line 2407
        .trainerName = _("Treasure"),
#line 2408
        .trainerClass = TRAINER_CLASS_FOREVER_LORD,
#line 2409
        .trainerPic = TRAINER_PIC_TREASURE,
        .encounterMusic_gender = 
#line 2411
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2412
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 2413
        .doubleBattle = TRUE,
#line 2414
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
#line 2415
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2417
            .species = SPECIES_SHELLDER,
#line 2417
            .gender = TRAINER_MON_MALE,
#line 2417
            .heldItem = ITEM_APICOT_BERRY,
#line 2420
            .ev = TRAINER_PARTY_EVS(20, 20, 20, 20, 20, 20),
#line 2419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 9, 31, 31),
#line 2418
            .lvl = 24,
#line 2421
            .ball = ITEM_DIVE_BALL,
#line 2422
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2423
                MOVE_WATER_PULSE,
                MOVE_CLAMP,
                MOVE_AURORA_BEAM,
                MOVE_LEER,
            },
            },
            {
#line 2428
            .species = SPECIES_TENTACOOL,
#line 2428
            .gender = TRAINER_MON_MALE,
#line 2428
            .heldItem = ITEM_ORAN_BERRY,
#line 2431
            .ev = TRAINER_PARTY_EVS(20, 20, 20, 20, 20, 20),
#line 2430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 9, 31, 31),
#line 2429
            .lvl = 25,
#line 2432
            .ball = ITEM_DIVE_BALL,
#line 2433
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2434
                MOVE_BUBBLE_BEAM,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
                MOVE_WRAP,
            },
            },
            {
#line 2439
            .species = SPECIES_LANTURN,
#line 2439
            .gender = TRAINER_MON_MALE,
#line 2439
            .heldItem = ITEM_RINDO_BERRY,
#line 2442
            .ev = TRAINER_PARTY_EVS(20, 0, 20, 20, 20, 20),
#line 2441
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 9, 31, 31),
#line 2440
            .lvl = 27,
#line 2443
            .ball = ITEM_DIVE_BALL,
#line 2444
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2445
                MOVE_BUBBLE_BEAM,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 2450
            .species = SPECIES_CRAWDAUNT,
#line 2450
            .gender = TRAINER_MON_MALE,
#line 2450
            .heldItem = ITEM_SITRUS_BERRY,
#line 2453
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 2452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 9, 31, 0),
#line 2451
            .lvl = 30,
#line 2454
            .ball = ITEM_DIVE_BALL,
#line 2455
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2456
                MOVE_CRABHAMMER,
                MOVE_BITE,
                MOVE_IRON_DEFENSE,
                MOVE_CUT,
            },
            },
        },
    },
#line 2461
    [TRAINER_OC_BADGE3HINT] =
    {
#line 2462
        .trainerName = _("Guide"),
#line 2463
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2464
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 2466
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2467
        .aiFlags = AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2469
            .species = SPECIES_GURDURR,
#line 2469
            .gender = TRAINER_MON_MALE,
#line 2473
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 2472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2471
            .ability = ABILITY_GUTS,
#line 2470
            .lvl = 28,
#line 2474
            .ball = ITEM_HEAVY_BALL,
#line 2475
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2476
                MOVE_LOW_KICK,
                MOVE_CURSE,
                MOVE_FIRE_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2481
    [TRAINER_OC_GYM3_ZUKO] =
    {
#line 2482
        .trainerName = _("Zuko"),
#line 2483
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2484
        .trainerPic = TRAINER_PIC_BLACK_BELT_C,
        .encounterMusic_gender = 
#line 2486
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2488
        .items = { ITEM_LAVA_COOKIE },
#line 2487
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2490
            .species = SPECIES_PAWNIARD,
#line 2490
            .gender = TRAINER_MON_MALE,
#line 2493
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2492
            .ability = ABILITY_PRESSURE,
#line 2491
            .lvl = 25,
#line 2494
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2495
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_SLASH,
                MOVE_PURSUIT,
            },
            },
            {
#line 2500
            .species = SPECIES_DARUMAKA,
#line 2500
            .gender = TRAINER_MON_MALE,
#line 2503
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2502
            .ability = ABILITY_INNER_FOCUS,
#line 2501
            .lvl = 25,
#line 2504
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2505
                MOVE_FIRE_PUNCH,
                MOVE_BULK_UP,
                MOVE_TWISTER,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2510
            .species = SPECIES_VULPIX,
#line 2510
            .gender = TRAINER_MON_MALE,
#line 2510
            .heldItem = ITEM_CHARCOAL,
#line 2512
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2511
            .lvl = 28,
#line 2513
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2514
                MOVE_MYSTICAL_FIRE,
                MOVE_PSYBEAM,
                MOVE_WILL_O_WISP,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 2519
    [TRAINER_OC_GYM3_IROH] =
    {
#line 2520
        .trainerName = _("Iroh"),
#line 2521
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2522
        .trainerPic = TRAINER_PIC_EXPERT_MC,
        .encounterMusic_gender = 
#line 2524
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2526
        .items = { ITEM_LAVA_COOKIE, ITEM_FRESH_WATER },
#line 2525
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2528
            .species = SPECIES_HONEDGE,
#line 2528
            .gender = TRAINER_MON_MALE,
#line 2530
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2529
            .lvl = 22,
#line 2531
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2532
                MOVE_METAL_CLAW,
                MOVE_ASTONISH,
                MOVE_SWORDS_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 2537
            .species = SPECIES_LAMPENT,
#line 2537
            .gender = TRAINER_MON_MALE,
#line 2540
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2539
            .ability = ABILITY_FLAME_BODY,
#line 2538
            .lvl = 24,
#line 2541
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2542
                MOVE_MYSTICAL_FIRE,
                MOVE_WILL_O_WISP,
                MOVE_DISABLE,
                MOVE_SMOG,
            },
            },
            {
#line 2547
            .species = SPECIES_GYARADOS,
#line 2547
            .gender = TRAINER_MON_MALE,
#line 2549
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2548
            .lvl = 24,
#line 2550
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2551
                MOVE_WATER_PULSE,
                MOVE_ICY_WIND,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 2556
            .species = SPECIES_GRAVELER,
#line 2556
            .gender = TRAINER_MON_MALE,
#line 2559
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2558
            .ability = ABILITY_STURDY,
#line 2557
            .lvl = 26,
#line 2560
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2561
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_DIG,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2566
            .species = SPECIES_HARIYAMA,
#line 2566
            .gender = TRAINER_MON_MALE,
#line 2566
            .heldItem = ITEM_CHARCOAL,
#line 2569
            .ev = TRAINER_PARTY_EVS(12, 12, 12, 12, 12, 12),
#line 2571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2568
            .ability = ABILITY_THICK_FAT,
#line 2567
            .lvl = 28,
#line 2570
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2571
                MOVE_COUNTER,
                MOVE_KARATE_CHOP,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
        },
    },
#line 2576
    [TRAINER_OC_BADGE3] =
    {
#line 2577
        .trainerName = _("Caius"),
#line 2578
        .trainerClass = TRAINER_CLASS_GOVERNOR,
#line 2579
        .trainerPic = TRAINER_PIC_BADGE3,
        .encounterMusic_gender = 
#line 2581
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2582
        .items = { ITEM_SODA_POP, ITEM_LAVA_COOKIE, ITEM_SODA_POP, ITEM_LAVA_COOKIE },
#line 2583
        .doubleBattle = TRUE,
#line 2584
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_ACE_POKEMON | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE,
#line 2585
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2587
            .species = SPECIES_DARUMAKA,
#line 2587
            .gender = TRAINER_MON_MALE,
#line 2587
            .heldItem = ITEM_ORAN_BERRY,
#line 2591
            .ev = TRAINER_PARTY_EVS(24, 24, 24, 24, 0, 24),
#line 2590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 10, 0, 31),
#line 2589
            .ability = ABILITY_HUSTLE,
#line 2588
            .lvl = 25,
#line 2592
            .ball = ITEM_HEAVY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2593
                MOVE_FIRE_PUNCH,
                MOVE_HEADBUTT,
                MOVE_ROLLOUT,
                MOVE_BULK_UP,
            },
            },
            {
#line 2598
            .species = SPECIES_GRAVELER,
#line 2598
            .gender = TRAINER_MON_MALE,
#line 2598
            .heldItem = ITEM_PASSHO_BERRY,
#line 2602
            .ev = TRAINER_PARTY_EVS(24, 24, 24, 24, 0, 24),
#line 2601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 10, 0, 31),
#line 2600
            .ability = ABILITY_STURDY,
#line 2599
            .lvl = 27,
#line 2603
            .ball = ITEM_HEAVY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2604
                MOVE_ROCK_TOMB,
                MOVE_MAGNITUDE,
                MOVE_BULLDOZE,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 2609
            .species = SPECIES_VULPIX,
#line 2609
            .gender = TRAINER_MON_MALE,
#line 2609
            .heldItem = ITEM_ORAN_BERRY,
#line 2612
            .ev = TRAINER_PARTY_EVS(24, 0, 24, 24, 24, 24),
#line 2611
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 10, 31, 31),
#line 2610
            .lvl = 29,
#line 2613
            .ball = ITEM_HEAVY_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2614
                MOVE_FLAMETHROWER,
                MOVE_PSYBEAM,
                MOVE_SUNNY_DAY,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 2619
            .nickname = COMPOUND_STRING("Septim"),
#line 2619
            .species = SPECIES_FALINKS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2619
            .heldItem = ITEM_SITRUS_BERRY,
#line 2623
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 2622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 10, 31, 31),
#line 2621
            .ability = ABILITY_BATTLE_ARMOR,
#line 2620
            .lvl = 30,
#line 2624
            .ball = ITEM_HEAVY_BALL,
#line 2625
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2626
                MOVE_BRICK_BREAK,
                MOVE_NO_RETREAT,
                MOVE_OVERHEAT,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2631
    [TRAINER_OC_B3_SPIDEY] =
    {
#line 2632
        .trainerName = _("Spider-Man"),
#line 2633
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2634
        .trainerPic = TRAINER_PIC_SPIDEY,
        .encounterMusic_gender = 
#line 2636
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 2637
        .items = { ITEM_FRESH_WATER, ITEM_SODA_POP, ITEM_SELENIACONE },
#line 2638
        .doubleBattle = TRUE,
#line 2639
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE,
#line 2640
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2642
            .species = SPECIES_GALVANTULA,
#line 2642
            .gender = TRAINER_MON_MALE,
#line 2642
            .heldItem = ITEM_SILVER_POWDER,
#line 2646
            .ev = TRAINER_PARTY_EVS(48, 48, 48, 48, 48, 48),
#line 2645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2644
            .ability = ABILITY_COMPOUND_EYES,
#line 2643
            .lvl = 34,
#line 2647
            .ball = ITEM_NET_BALL,
#line 2648
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2649
                MOVE_ELECTROWEB,
                MOVE_SIGNAL_BEAM,
                MOVE_STICKY_WEB,
                MOVE_BITE,
            },
            },
            {
#line 2654
            .species = SPECIES_VANILLISH,
#line 2654
            .gender = TRAINER_MON_MALE,
#line 2654
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 2658
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 48, 0),
#line 2657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2656
            .ability = ABILITY_ICE_BODY,
#line 2655
            .lvl = 27,
#line 2659
            .ball = ITEM_POKE_BALL,
#line 2660
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2661
                MOVE_ICE_BEAM,
                MOVE_MIRROR_SHOT,
                MOVE_SHOCK_WAVE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 2666
            .species = SPECIES_RIOLU,
#line 2666
            .gender = TRAINER_MON_MALE,
#line 2666
            .heldItem = ITEM_BLACK_BELT,
#line 2670
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 0, 48, 0),
#line 2669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2668
            .ability = ABILITY_STEADFAST,
#line 2667
            .lvl = 30,
#line 2671
            .ball = ITEM_GREAT_BALL,
#line 2672
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2673
                MOVE_KARATE_CHOP,
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_COUNTER,
            },
            },
            {
#line 2678
            .species = SPECIES_LEAVANNY,
#line 2678
            .gender = TRAINER_MON_MALE,
#line 2678
            .heldItem = ITEM_OCCA_BERRY,
#line 2682
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 48, 0, 0),
#line 2681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2680
            .ability = ABILITY_SUN_SOAK,
#line 2679
            .lvl = 34,
#line 2683
            .ball = ITEM_NET_BALL,
#line 2684
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2685
                MOVE_LEAF_BLADE,
                MOVE_LEECH_SEED,
                MOVE_PIN_MISSILE,
                MOVE_STRING_SHOT,
            },
            },
        },
    },
#line 2690
    [TRAINER_OC_R9_BELLE] =
    {
#line 2691
        .trainerName = _("Belle"),
#line 2692
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2693
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 2694
F_TRAINER_FEMALE | 
#line 2695
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2696
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2698
            .species = SPECIES_WEEPINBELL,
#line 2698
            .gender = TRAINER_MON_FEMALE,
#line 2703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2700
            .ability = ABILITY_CHLOROPHYLL,
#line 2699
            .lvl = 24,
#line 2701
            .ball = ITEM_LOVE_BALL,
#line 2702
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2704
            .species = SPECIES_SWABLU,
#line 2704
            .gender = TRAINER_MON_FEMALE,
#line 2709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2706
            .ability = ABILITY_NATURAL_CURE,
#line 2705
            .lvl = 26,
#line 2707
            .ball = ITEM_NEST_BALL,
#line 2708
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2710
            .nickname = COMPOUND_STRING("Lumiere"),
#line 2710
            .species = SPECIES_LAMPENT,
#line 2710
            .gender = TRAINER_MON_MALE,
#line 2714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2711
            .lvl = 28,
#line 2712
            .ball = ITEM_LUXURY_BALL,
#line 2713
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2715
    [TRAINER_OC_R9_GASTON] =
    {
#line 2716
        .trainerName = _("Gaston"),
#line 2717
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 2718
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 2720
            TRAINER_ENCOUNTER_MUSIC_COOL,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2722
            .nickname = COMPOUND_STRING("A Dozen Eggs"),
#line 2722
            .species = SPECIES_EXEGGCUTE,
#line 2722
            .gender = TRAINER_MON_MALE,
#line 2726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2723
            .lvl = 24,
#line 2724
            .ball = ITEM_GREAT_BALL,
#line 2725
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2726
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSION,
                MOVE_LEECH_SEED,
                MOVE_REFLECT,
            },
            },
            {
#line 2731
            .nickname = COMPOUND_STRING("A Dozen Eggs"),
#line 2731
            .species = SPECIES_EXEGGCUTE,
#line 2731
            .gender = TRAINER_MON_MALE,
#line 2735
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2732
            .lvl = 24,
#line 2733
            .ball = ITEM_GREAT_BALL,
#line 2734
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2735
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSION,
                MOVE_LEECH_SEED,
                MOVE_REFLECT,
            },
            },
            {
#line 2740
            .nickname = COMPOUND_STRING("A Dozen Eggs"),
#line 2740
            .species = SPECIES_EXEGGCUTE,
#line 2740
            .gender = TRAINER_MON_MALE,
#line 2744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2741
            .lvl = 24,
#line 2742
            .ball = ITEM_GREAT_BALL,
#line 2743
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2744
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSION,
                MOVE_LEECH_SEED,
                MOVE_REFLECT,
            },
            },
            {
#line 2749
            .nickname = COMPOUND_STRING("A Dozen Eggs"),
#line 2749
            .species = SPECIES_EXEGGCUTE,
#line 2749
            .gender = TRAINER_MON_MALE,
#line 2753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2750
            .lvl = 24,
#line 2751
            .ball = ITEM_GREAT_BALL,
#line 2752
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2753
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSION,
                MOVE_LEECH_SEED,
                MOVE_REFLECT,
            },
            },
            {
#line 2758
            .nickname = COMPOUND_STRING("A Dozen Eggs"),
#line 2758
            .species = SPECIES_EXEGGCUTE,
#line 2758
            .gender = TRAINER_MON_MALE,
#line 2762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2759
            .lvl = 24,
#line 2760
            .ball = ITEM_GREAT_BALL,
#line 2761
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2762
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSION,
                MOVE_LEECH_SEED,
                MOVE_REFLECT,
            },
            },
        },
    },
#line 2767
    [TRAINER_OC_R9_MAURICE] =
    {
#line 2768
        .trainerName = _("Maurice"),
#line 2769
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 2770
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 2772
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2773
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2775
            .species = SPECIES_TIMBURR,
#line 2775
            .gender = TRAINER_MON_MALE,
#line 2779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2777
            .ability = ABILITY_GUTS,
#line 2776
            .lvl = 24,
#line 2778
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2780
            .species = SPECIES_AXEW,
#line 2780
            .gender = TRAINER_MON_MALE,
#line 2784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2782
            .ability = ABILITY_UNNERVE,
#line 2781
            .lvl = 26,
#line 2783
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2784
                MOVE_TWISTER,
                MOVE_FALSE_SWIPE,
                MOVE_BITE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 2789
            .species = SPECIES_GOLETT,
#line 2789
            .gender = TRAINER_MON_MALE,
#line 2793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2791
            .ability = ABILITY_KLUTZ,
#line 2790
            .lvl = 28,
#line 2792
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2793
                MOVE_DIG,
                MOVE_SHADOW_PUNCH,
                MOVE_IRON_DEFENSE,
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 2798
    [TRAINER_OC_R9_CAIN] =
    {
#line 2799
        .trainerName = _("Cain"),
#line 2800
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 2801
        .trainerPic = TRAINER_PIC_RANGER_MB,
        .encounterMusic_gender = 
#line 2802
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2803
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2805
            .species = SPECIES_EXEGGCUTE,
#line 2805
            .gender = TRAINER_MON_MALE,
#line 2807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2806
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2808
            .species = SPECIES_WEEPINBELL,
#line 2808
            .gender = TRAINER_MON_MALE,
#line 2810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2809
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2811
            .species = SPECIES_GRAVELER,
#line 2811
            .gender = TRAINER_MON_MALE,
#line 2813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2812
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2813
                MOVE_ROCK_TOMB,
                MOVE_ROCK_THROW,
                MOVE_DIG,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 2818
    [TRAINER_OC_R9_ABEL] =
    {
#line 2819
        .trainerName = _("Abel"),
#line 2820
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 2821
        .trainerPic = TRAINER_PIC_RANGER_MB,
        .encounterMusic_gender = 
#line 2822
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2823
        .aiFlags = AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2825
            .species = SPECIES_MAREEP,
#line 2825
            .gender = TRAINER_MON_MALE,
#line 2827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2826
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2828
            .species = SPECIES_FLAAFFY,
#line 2828
            .gender = TRAINER_MON_MALE,
#line 2830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2829
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2831
            .species = SPECIES_AMPHAROS,
#line 2831
            .gender = TRAINER_MON_MALE,
#line 2833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2832
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2833
                MOVE_DISCHARGE,
                MOVE_DRAGON_BREATH,
                MOVE_POWER_GEM,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2838
    [TRAINER_OC_R9_CLARK] =
    {
#line 2839
        .trainerName = _("Clark"),
#line 2840
        .trainerClass = TRAINER_CLASS_REPORTER,
#line 2841
        .trainerPic = TRAINER_PIC_SUPERMAN,
        .encounterMusic_gender = 
#line 2842
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2844
        .items = { ITEM_FRESH_WATER, ITEM_BURGER, ITEM_MOOMOO_MILK, ITEM_SELENIACONE },
#line 2843
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2846
            .nickname = COMPOUND_STRING("Bird"),
#line 2846
            .species = SPECIES_DODUO,
#line 2846
            .gender = TRAINER_MON_MALE,
#line 2846
            .heldItem = ITEM_YACHE_BERRY,
#line 2851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2848
            .ability = ABILITY_GUTS,
#line 2847
            .lvl = 26,
#line 2849
            .ball = ITEM_GREAT_BALL,
#line 2850
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2851
                MOVE_BULLDOZE,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
            },
            },
            {
#line 2856
            .nickname = COMPOUND_STRING("Plane"),
#line 2856
            .species = SPECIES_TOGETIC,
#line 2856
            .gender = TRAINER_MON_MALE,
#line 2856
            .heldItem = ITEM_SALAC_BERRY,
#line 2861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2858
            .ability = ABILITY_SUPER_LUCK,
#line 2857
            .lvl = 27,
#line 2859
            .ball = ITEM_GREAT_BALL,
#line 2860
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2861
                MOVE_AIR_CUTTER,
                MOVE_SOFT_BOILED,
                MOVE_ANCIENT_POWER,
                MOVE_METRONOME,
            },
            },
            {
#line 2866
            .nickname = COMPOUND_STRING("Steel"),
#line 2866
            .species = SPECIES_STEELIX,
#line 2866
            .gender = TRAINER_MON_MALE,
#line 2866
            .heldItem = ITEM_AIR_BALLOON,
#line 2871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2868
            .ability = ABILITY_SHEER_FORCE,
#line 2867
            .lvl = 28,
#line 2869
            .ball = ITEM_GREAT_BALL,
#line 2870
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2871
                MOVE_IRON_HEAD,
                MOVE_BULLDOZE,
                MOVE_DRAGON_BREATH,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2876
            .nickname = COMPOUND_STRING("Krypto"),
#line 2876
            .species = SPECIES_HOUNDOUR,
#line 2876
            .gender = TRAINER_MON_MALE,
#line 2876
            .heldItem = ITEM_AIR_BALLOON,
#line 2881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2878
            .ability = ABILITY_SOLAR_POWER,
#line 2877
            .lvl = 27,
#line 2879
            .ball = ITEM_GREAT_BALL,
#line 2880
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2881
                MOVE_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_EMBER,
                MOVE_HOWL,
            },
            },
            {
#line 2886
            .nickname = COMPOUND_STRING("Corn"),
#line 2886
            .species = SPECIES_KERNEL_PULT,
#line 2886
            .gender = TRAINER_MON_MALE,
#line 2886
            .heldItem = ITEM_AIR_BALLOON,
#line 2889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2887
            .lvl = 25,
#line 2888
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2889
                MOVE_MEGA_DRAIN,
                MOVE_BUTTER,
                MOVE_BULLET_SEED,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 2894
            .nickname = COMPOUND_STRING("Bourguignon"),
#line 2894
            .species = SPECIES_TAUROS,
#line 2894
            .gender = TRAINER_MON_MALE,
#line 2894
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 2899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2896
            .ability = ABILITY_STAMINA,
#line 2895
            .lvl = 30,
#line 2897
            .ball = ITEM_GREAT_BALL,
#line 2898
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2899
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
                MOVE_REST,
            },
            },
        },
    },
#line 2904
    [TRAINER_OC_R9_SATELLA] =
    {
#line 2905
        .trainerName = _("Satella"),
#line 2906
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 2907
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 2908
F_TRAINER_FEMALE | 
#line 2909
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2911
        .items = { ITEM_FRESH_WATER, ITEM_SODA_POP, ITEM_LEMONADE, ITEM_CASTELIACONE },
#line 2910
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2913
            .nickname = COMPOUND_STRING("Cotton Candy"),
#line 2913
            .species = SPECIES_MAREEP,
#line 2913
            .gender = TRAINER_MON_FEMALE,
#line 2913
            .heldItem = ITEM_PECHA_BERRY,
#line 2919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2915
            .ability = ABILITY_FLUFFY,
#line 2914
            .lvl = 26,
#line 2916
            .ball = ITEM_POKE_BALL,
#line 2918
            .friendship = 128,
            .nature = NATURE_HARDY,
#line 2917
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2920
            .nickname = COMPOUND_STRING("Yugamu"),
#line 2920
            .species = SPECIES_JOLTIK,
#line 2920
            .gender = TRAINER_MON_MALE,
#line 2920
            .heldItem = ITEM_ORAN_BERRY,
#line 2926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2922
            .ability = ABILITY_UNNERVE,
#line 2921
            .lvl = 26,
#line 2923
            .ball = ITEM_POKE_BALL,
#line 2925
            .friendship = 128,
            .nature = NATURE_HARDY,
#line 2924
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2926
                MOVE_PIN_MISSILE,
                MOVE_BITE,
                MOVE_SHOCK_WAVE,
                MOVE_SLASH,
            },
            },
            {
#line 2931
            .nickname = COMPOUND_STRING("Felice"),
#line 2931
            .species = SPECIES_SEWADDLE,
#line 2931
            .gender = TRAINER_MON_FEMALE,
#line 2931
            .heldItem = ITEM_ORAN_BERRY,
#line 2937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2933
            .ability = ABILITY_SWARM,
#line 2932
            .lvl = 27,
#line 2934
            .ball = ITEM_POKE_BALL,
#line 2936
            .friendship = 128,
            .nature = NATURE_HARDY,
#line 2935
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2937
                MOVE_PIN_MISSILE,
                MOVE_RAZOR_LEAF,
                MOVE_SLASH,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2942
            .nickname = COMPOUND_STRING("Jack-Jack"),
#line 2942
            .species = SPECIES_SWABLU,
#line 2942
            .gender = TRAINER_MON_MALE,
#line 2942
            .heldItem = ITEM_SITRUS_BERRY,
#line 2949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2944
            .ability = ABILITY_NATURAL_CURE,
#line 2943
            .lvl = 27,
#line 2945
            .ball = ITEM_POKE_BALL,
#line 2948
            .friendship = 255,
#line 2946
            .nature = NATURE_NAUGHTY,
#line 2947
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2949
                MOVE_SHOCK_WAVE,
                MOVE_AERIAL_ACE,
                MOVE_UPROAR,
                MOVE_ATTRACT,
            },
            },
            {
#line 2954
            .nickname = COMPOUND_STRING("Fergus"),
#line 2954
            .species = SPECIES_EEVEE,
#line 2954
            .gender = TRAINER_MON_MALE,
#line 2954
            .heldItem = ITEM_SILK_SCARF,
#line 2961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2956
            .ability = ABILITY_ADAPTABILITY,
#line 2955
            .lvl = 28,
#line 2957
            .ball = ITEM_POKE_BALL,
#line 2960
            .friendship = 255,
#line 2958
            .nature = NATURE_JOLLY,
#line 2959
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2961
                MOVE_RETURN,
                MOVE_BITE,
                MOVE_MUD_SLAP,
                MOVE_CHARM,
            },
            },
        },
    },
#line 2966
    [TRAINER_OC_R9_KEVIN] =
    {
#line 2967
        .trainerName = _("Kevin"),
#line 2968
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 2969
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2971
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2972
        .items = { ITEM_SODA_POP, ITEM_SODA_POP, ITEM_SODA_POP },
#line 2973
        .aiFlags = AI_FLAG_WILL_SUICIDE | AI_FLAG_HP_AWARE | AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2975
            .nickname = COMPOUND_STRING("Land Boat"),
#line 2975
            .species = SPECIES_LOMBRE,
#line 2975
            .gender = TRAINER_MON_MALE,
#line 2980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2977
            .ability = ABILITY_RAIN_DISH,
#line 2976
            .lvl = 23,
#line 2978
            .ball = ITEM_GREAT_BALL,
#line 2979
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2981
            .nickname = COMPOUND_STRING("Piggy"),
#line 2981
            .species = SPECIES_PILOSWINE,
#line 2981
            .gender = TRAINER_MON_MALE,
#line 2986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2983
            .ability = ABILITY_THICK_FAT,
#line 2982
            .lvl = 24,
#line 2984
            .ball = ITEM_GREAT_BALL,
#line 2985
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2987
            .nickname = COMPOUND_STRING("Potato"),
#line 2987
            .species = SPECIES_BAKETATER,
#line 2987
            .gender = TRAINER_MON_MALE,
#line 2991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2988
            .lvl = 24,
#line 2989
            .ball = ITEM_GREAT_BALL,
#line 2990
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2991
                MOVE_BULLDOZE,
                MOVE_FLAME_WHEEL,
                MOVE_RAZOR_LEAF,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 2996
    [TRAINER_OC_R9_ANNA] =
    {
#line 2997
        .trainerName = _("Anna"),
#line 2998
        .trainerClass = TRAINER_CLASS_LADY,
#line 2999
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 3000
F_TRAINER_FEMALE | 
#line 3001
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3002
        .items = { ITEM_FRESH_WATER, ITEM_FRESH_WATER, ITEM_FRESH_WATER },
#line 3003
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3005
            .nickname = COMPOUND_STRING("Pawn"),
#line 3005
            .species = SPECIES_PAWNIARD,
#line 3005
            .gender = TRAINER_MON_FEMALE,
#line 3009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3007
            .ability = ABILITY_DEFIANT,
#line 3006
            .lvl = 29,
#line 3008
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3009
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_PURSUIT,
                MOVE_LEER,
            },
            },
            {
#line 3014
            .nickname = COMPOUND_STRING("Rook-Knight"),
#line 3014
            .species = SPECIES_LAIRON,
#line 3014
            .gender = TRAINER_MON_FEMALE,
#line 3018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3016
            .ability = ABILITY_ROCK_HEAD,
#line 3015
            .lvl = 29,
#line 3017
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3019
            .nickname = COMPOUND_STRING("Queen"),
#line 3019
            .species = SPECIES_NIDOQUEEN,
#line 3019
            .gender = TRAINER_MON_FEMALE,
#line 3023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3021
            .ability = ABILITY_SERENE_GRACE,
#line 3020
            .lvl = 30,
#line 3022
            .ball = ITEM_GREAT_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3024
    [TRAINER_OC_SAFARI_SW] =
    {
#line 3025
        .trainerName = _("Marisa"),
#line 3026
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3027
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 3028
F_TRAINER_FEMALE | 
#line 3029
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3031
        .items = { ITEM_MOOMOO_MILK, ITEM_SELENIACONE, ITEM_CHOCO_MILK },
#line 3030
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3033
            .species = SPECIES_LAMPENT,
#line 3033
            .gender = TRAINER_MON_FEMALE,
#line 3033
            .heldItem = ITEM_ORAN_BERRY,
#line 3038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3037
            .ability = ABILITY_INFILTRATOR,
#line 3034
            .lvl = 25,
#line 3035
            .ball = ITEM_SAFARI_BALL,
#line 3036
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3039
            .species = SPECIES_RHYHORN,
#line 3039
            .gender = TRAINER_MON_FEMALE,
#line 3039
            .heldItem = ITEM_ORAN_BERRY,
#line 3044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3043
            .ability = ABILITY_RECKLESS,
#line 3040
            .lvl = 26,
#line 3041
            .ball = ITEM_SAFARI_BALL,
#line 3042
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3045
            .species = SPECIES_DARUMAKA,
#line 3045
            .gender = TRAINER_MON_FEMALE,
#line 3045
            .heldItem = ITEM_ORAN_BERRY,
#line 3050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3049
            .ability = ABILITY_HUSTLE,
#line 3046
            .lvl = 27,
#line 3047
            .ball = ITEM_SAFARI_BALL,
#line 3048
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3050
                MOVE_FIRE_PUNCH,
                MOVE_BULK_UP,
                MOVE_ROCK_TOMB,
                MOVE_THRASH,
            },
            },
            {
#line 3055
            .species = SPECIES_FALINKS,
#line 3055
            .gender = TRAINER_MON_FEMALE,
#line 3055
            .heldItem = ITEM_ORAN_BERRY,
#line 3060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3059
            .ability = ABILITY_DEFIANT,
#line 3056
            .lvl = 28,
#line 3057
            .ball = ITEM_SAFARI_BALL,
#line 3058
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3061
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3061
            .heldItem = ITEM_ORAN_BERRY,
#line 3066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3065
            .ability = ABILITY_INTIMIDATE,
#line 3062
            .lvl = 29,
#line 3063
            .ball = ITEM_SAFARI_BALL,
#line 3064
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3067
            .species = SPECIES_HERACROSS,
#line 3067
            .gender = TRAINER_MON_FEMALE,
#line 3067
            .heldItem = ITEM_SITRUS_BERRY,
#line 3072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3071
            .ability = ABILITY_MOXIE,
#line 3068
            .lvl = 30,
#line 3069
            .ball = ITEM_SAFARI_BALL,
#line 3070
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3072
                MOVE_BRICK_BREAK,
                MOVE_MACH_PUNCH,
                MOVE_PIN_MISSILE,
                MOVE_HEADBUTT,
            },
            },
        },
    },
#line 3077
    [TRAINER_OC_SAFARI_NW] =
    {
#line 3078
        .trainerName = _("Fir"),
#line 3079
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3080
        .trainerPic = TRAINER_PIC_RANGER_FB,
        .encounterMusic_gender = 
#line 3081
F_TRAINER_FEMALE | 
#line 3082
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3084
        .items = { ITEM_MOOMOO_MILK, ITEM_SELENIACONE, ITEM_CHOCO_MILK },
#line 3083
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3086
            .species = SPECIES_EELEKTRIK,
#line 3086
            .gender = TRAINER_MON_FEMALE,
#line 3086
            .heldItem = ITEM_ORAN_BERRY,
#line 3090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3087
            .lvl = 25,
#line 3088
            .ball = ITEM_SAFARI_BALL,
#line 3089
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3090
                MOVE_CHARGE_BEAM,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_AGILITY,
            },
            },
            {
#line 3095
            .species = SPECIES_WINGULL,
#line 3095
            .gender = TRAINER_MON_FEMALE,
#line 3095
            .heldItem = ITEM_ORAN_BERRY,
#line 3099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3096
            .lvl = 26,
#line 3097
            .ball = ITEM_SAFARI_BALL,
#line 3098
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3100
            .species = SPECIES_SWABLU,
#line 3100
            .gender = TRAINER_MON_FEMALE,
#line 3100
            .heldItem = ITEM_ORAN_BERRY,
#line 3105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3104
            .ability = ABILITY_NATURAL_CURE,
#line 3101
            .lvl = 27,
#line 3102
            .ball = ITEM_SAFARI_BALL,
#line 3103
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3105
                MOVE_AIR_CUTTER,
                MOVE_TWISTER,
                MOVE_WATER_PULSE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3110
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3110
            .heldItem = ITEM_ORAN_BERRY,
#line 3115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3114
            .ability = ABILITY_POISON_POINT,
#line 3111
            .lvl = 28,
#line 3112
            .ball = ITEM_SAFARI_BALL,
#line 3113
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3115
                MOVE_SLUDGE,
                MOVE_BULLDOZE,
                MOVE_SHOCK_WAVE,
                MOVE_BITE,
            },
            },
            {
#line 3120
            .species = SPECIES_FLAAFFY,
#line 3120
            .gender = TRAINER_MON_FEMALE,
#line 3120
            .heldItem = ITEM_ORAN_BERRY,
#line 3125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3124
            .ability = ABILITY_FLUFFY,
#line 3121
            .lvl = 29,
#line 3122
            .ball = ITEM_SAFARI_BALL,
#line 3123
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3125
                MOVE_DISCHARGE,
                MOVE_POWER_GEM,
                MOVE_COTTON_SPORE,
                MOVE_TWISTER,
            },
            },
            {
#line 3130
            .species = SPECIES_EEVEE,
#line 3130
            .gender = TRAINER_MON_FEMALE,
#line 3130
            .heldItem = ITEM_SITRUS_BERRY,
#line 3135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3134
            .ability = ABILITY_ADAPTABILITY,
#line 3131
            .lvl = 30,
#line 3132
            .ball = ITEM_SAFARI_BALL,
#line 3133
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3136
    [TRAINER_OC_SAFARI_NE] =
    {
#line 3137
        .trainerName = _("Lugh"),
#line 3138
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3139
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 3141
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3143
        .items = { ITEM_MOOMOO_MILK, ITEM_SELENIACONE, ITEM_CHOCO_MILK },
#line 3142
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3145
            .species = SPECIES_VANILLISH,
#line 3145
            .gender = TRAINER_MON_MALE,
#line 3145
            .heldItem = ITEM_ORAN_BERRY,
#line 3150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3149
            .ability = ABILITY_ICE_BODY,
#line 3146
            .lvl = 25,
#line 3147
            .ball = ITEM_SAFARI_BALL,
#line 3148
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3150
                MOVE_ICE_BEAM,
                MOVE_SHOCK_WAVE,
                MOVE_MIRROR_SHOT,
                MOVE_HAZE,
            },
            },
            {
#line 3155
            .species = SPECIES_KADABRA,
#line 3155
            .gender = TRAINER_MON_MALE,
#line 3155
            .heldItem = ITEM_ORAN_BERRY,
#line 3160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3159
            .ability = ABILITY_MAGIC_GUARD,
#line 3156
            .lvl = 26,
#line 3157
            .ball = ITEM_SAFARI_BALL,
#line 3158
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3160
                MOVE_PSYBEAM,
                MOVE_REFLECT,
                MOVE_ICY_WIND,
                MOVE_RECOVER,
            },
            },
            {
#line 3165
            .species = SPECIES_VENONAT,
#line 3165
            .gender = TRAINER_MON_MALE,
#line 3165
            .heldItem = ITEM_ORAN_BERRY,
#line 3170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3169
            .ability = ABILITY_COMPOUND_EYES,
#line 3166
            .lvl = 27,
#line 3167
            .ball = ITEM_SAFARI_BALL,
#line 3168
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3170
                MOVE_SIGNAL_BEAM,
                MOVE_PSYBEAM,
                MOVE_ICY_WIND,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3175
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3175
            .heldItem = ITEM_ORAN_BERRY,
#line 3180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3179
            .ability = ABILITY_POISON_POINT,
#line 3176
            .lvl = 28,
#line 3177
            .ball = ITEM_SAFARI_BALL,
#line 3178
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3180
                MOVE_SLUDGE,
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3185
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3185
            .heldItem = ITEM_ORAN_BERRY,
#line 3190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3189
            .ability = ABILITY_STAMINA,
#line 3186
            .lvl = 29,
#line 3187
            .ball = ITEM_SAFARI_BALL,
#line 3188
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3190
                MOVE_BODY_SLAM,
                MOVE_PURSUIT,
                MOVE_ICY_WIND,
                MOVE_BULLDOZE,
            },
            },
            {
#line 3195
            .species = SPECIES_SIGILYPH,
#line 3195
            .gender = TRAINER_MON_MALE,
#line 3195
            .heldItem = ITEM_SITRUS_BERRY,
#line 3200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3199
            .ability = ABILITY_MAGIC_GUARD,
#line 3196
            .lvl = 30,
#line 3197
            .ball = ITEM_SAFARI_BALL,
#line 3198
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3201
    [TRAINER_OC_SAFARI_SE] =
    {
#line 3202
        .trainerName = _("Sue"),
#line 3203
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3204
        .trainerPic = TRAINER_PIC_RANGER_FC,
        .encounterMusic_gender = 
#line 3205
F_TRAINER_FEMALE | 
#line 3206
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3208
        .items = { ITEM_MOOMOO_MILK, ITEM_SELENIACONE, ITEM_CHOCO_MILK },
#line 3207
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3210
            .species = SPECIES_KROKOROK,
#line 3210
            .gender = TRAINER_MON_FEMALE,
#line 3210
            .heldItem = ITEM_ORAN_BERRY,
#line 3215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3214
            .ability = ABILITY_INTIMIDATE,
#line 3211
            .lvl = 25,
#line 3212
            .ball = ITEM_SAFARI_BALL,
#line 3213
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3215
                MOVE_MAGNITUDE,
                MOVE_BULLDOZE,
                MOVE_FEINT_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 3220
            .species = SPECIES_DODUO,
#line 3220
            .gender = TRAINER_MON_FEMALE,
#line 3220
            .heldItem = ITEM_ORAN_BERRY,
#line 3225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3224
            .ability = ABILITY_GUTS,
#line 3221
            .lvl = 26,
#line 3222
            .ball = ITEM_SAFARI_BALL,
#line 3223
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3226
            .species = SPECIES_EXEGGCUTE,
#line 3226
            .gender = TRAINER_MON_FEMALE,
#line 3226
            .heldItem = ITEM_ORAN_BERRY,
#line 3231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3230
            .ability = ABILITY_HARVEST,
#line 3227
            .lvl = 27,
#line 3228
            .ball = ITEM_SAFARI_BALL,
#line 3229
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3231
                MOVE_PSYBEAM,
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 3236
            .species = SPECIES_SLAKOTH,
#line 3236
            .gender = TRAINER_MON_FEMALE,
#line 3236
            .heldItem = ITEM_ORAN_BERRY,
#line 3240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3237
            .lvl = 28,
#line 3238
            .ball = ITEM_SAFARI_BALL,
#line 3239
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3241
            .species = SPECIES_GIRAFARIG,
#line 3241
            .gender = TRAINER_MON_FEMALE,
#line 3241
            .heldItem = ITEM_ORAN_BERRY,
#line 3246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3245
            .ability = ABILITY_SAP_SIPPER,
#line 3242
            .lvl = 29,
#line 3243
            .ball = ITEM_SAFARI_BALL,
#line 3244
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3246
                MOVE_HEADBUTT,
                MOVE_PSYBEAM,
                MOVE_BITE,
                MOVE_AGILITY,
            },
            },
            {
#line 3251
            .species = SPECIES_SCYTHER,
#line 3251
            .gender = TRAINER_MON_FEMALE,
#line 3251
            .heldItem = ITEM_SITRUS_BERRY,
#line 3256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3255
            .ability = ABILITY_TECHNICIAN,
#line 3252
            .lvl = 30,
#line 3253
            .ball = ITEM_SAFARI_BALL,
#line 3254
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3257
    [TRAINER_OC_TVA_1] =
    {
#line 3258
        .trainerName = _("T-800"),
#line 3259
        .trainerClass = TRAINER_CLASS_TVA_AGENT,
#line 3260
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3262
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3263
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3265
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3266
            .lvl = 24,
#line 3267
            .ball = ITEM_HEAVY_BALL,
#line 3268
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3270
            .species = SPECIES_ZWEILOUS,
#line 3270
            .gender = TRAINER_MON_MALE,
#line 3274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3271
            .lvl = 28,
#line 3272
            .ball = ITEM_HEAVY_BALL,
#line 3273
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3275
    [TRAINER_OC_TVA_2] =
    {
#line 3276
        .trainerName = _("MF-85"),
#line 3277
        .trainerClass = TRAINER_CLASS_TVA_AGENT,
#line 3278
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3280
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3281
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3283
            .species = SPECIES_KROKOROK,
#line 3283
            .gender = TRAINER_MON_MALE,
#line 3287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3285
            .ability = ABILITY_MOXIE,
#line 3284
            .lvl = 25,
#line 3286
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3288
            .species = SPECIES_EELEKTRIK,
#line 3288
            .gender = TRAINER_MON_MALE,
#line 3291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3289
            .lvl = 27,
#line 3290
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3291
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_BITE,
                MOVE_AGILITY,
            },
            },
            {
#line 3296
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3297
            .lvl = 30,
#line 3298
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3299
                MOVE_SHOCK_WAVE,
                MOVE_MIRROR_SHOT,
                MOVE_THUNDER_WAVE,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 3304
    [TRAINER_OC_TVA_3] =
    {
#line 3305
        .trainerName = _("LA-95"),
#line 3306
        .trainerClass = TRAINER_CLASS_TVA_AGENT,
#line 3307
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 3308
F_TRAINER_FEMALE | 
#line 3309
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3310
        .items = { ITEM_FRESH_WATER, ITEM_SODA_POP },
#line 3312
        .doubleBattle = TRUE,
#line 3311
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3314
            .nickname = COMPOUND_STRING("Crono"),
#line 3314
            .species = SPECIES_FLAAFFY,
#line 3314
            .gender = TRAINER_MON_MALE,
#line 3318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3316
            .ability = ABILITY_STATIC,
#line 3315
            .lvl = 25,
#line 3317
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3318
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_PUNCH,
                MOVE_TWISTER,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3323
            .nickname = COMPOUND_STRING("Marle"),
#line 3323
            .species = SPECIES_VANILLISH,
#line 3323
            .gender = TRAINER_MON_FEMALE,
#line 3327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3325
            .ability = ABILITY_ICE_BODY,
#line 3324
            .lvl = 25,
#line 3326
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3327
                MOVE_ICE_BEAM,
                MOVE_ICY_WIND,
                MOVE_MIRROR_SHOT,
                MOVE_HAZE,
            },
            },
            {
#line 3332
            .nickname = COMPOUND_STRING("Frog"),
#line 3332
            .species = SPECIES_PALPITOAD,
#line 3332
            .gender = TRAINER_MON_MALE,
#line 3336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3334
            .ability = ABILITY_WATER_ABSORB,
#line 3333
            .lvl = 25,
#line 3335
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3336
                MOVE_BUBBLE_BEAM,
                MOVE_AQUA_JET,
                MOVE_BULLDOZE,
                MOVE_SING,
            },
            },
            {
#line 3341
            .nickname = COMPOUND_STRING("Robo"),
#line 3341
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3343
            .ability = ABILITY_IRON_FIST,
#line 3342
            .lvl = 25,
#line 3344
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3345
                MOVE_BULLDOZE,
                MOVE_SHADOW_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 3350
            .nickname = COMPOUND_STRING("Ayla"),
#line 3350
            .species = SPECIES_TYRUNT,
#line 3350
            .gender = TRAINER_MON_FEMALE,
#line 3354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3352
            .ability = ABILITY_STRONG_JAW,
#line 3351
            .lvl = 26,
#line 3353
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3355
            .nickname = COMPOUND_STRING("Magus"),
#line 3355
            .species = SPECIES_KADABRA,
#line 3355
            .gender = TRAINER_MON_MALE,
#line 3359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3357
            .ability = ABILITY_MAGIC_GUARD,
#line 3356
            .lvl = 27,
#line 3358
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3359
                MOVE_PSYBEAM,
                MOVE_MYSTICAL_FIRE,
                MOVE_ICY_WIND,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 3364
    [TRAINER_OC_TVA_4] =
    {
#line 3365
        .trainerName = _("FE-13"),
#line 3366
        .trainerClass = TRAINER_CLASS_TVA_AGENT,
#line 3367
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 3368
F_TRAINER_FEMALE | 
#line 3369
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3370
        .items = { ITEM_FRESH_WATER, ITEM_MAX_POTION },
#line 3372
        .doubleBattle = TRUE,
#line 3371
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_DOUBLE_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3374
            .nickname = COMPOUND_STRING("Olivia"),
#line 3374
            .species = SPECIES_PERSIAN,
#line 3374
            .gender = TRAINER_MON_FEMALE,
#line 3378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3376
            .ability = ABILITY_TECHNICIAN,
#line 3375
            .lvl = 25,
#line 3377
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3378
                MOVE_POWER_GEM,
                MOVE_SWORDS_DANCE,
                MOVE_PAY_DAY,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3383
            .nickname = COMPOUND_STRING("Maribelle"),
#line 3383
            .species = SPECIES_BRELOOM,
#line 3383
            .gender = TRAINER_MON_FEMALE,
#line 3387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3385
            .ability = ABILITY_TECHNICIAN,
#line 3384
            .lvl = 25,
#line 3386
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3387
                MOVE_MACH_PUNCH,
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 3392
            .nickname = COMPOUND_STRING("Sumia"),
#line 3392
            .species = SPECIES_SWABLU,
#line 3392
            .gender = TRAINER_MON_FEMALE,
#line 3396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3394
            .ability = ABILITY_CLOUD_NINE,
#line 3393
            .lvl = 25,
#line 3395
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3396
                MOVE_UPROAR,
                MOVE_AIR_CUTTER,
                MOVE_REFRESH,
                MOVE_SAFEGUARD,
            },
            },
            {
#line 3401
            .nickname = COMPOUND_STRING("Sully"),
#line 3401
            .species = SPECIES_PAWNIARD,
#line 3401
            .gender = TRAINER_MON_FEMALE,
#line 3405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3403
            .ability = ABILITY_PRESSURE,
#line 3402
            .lvl = 25,
#line 3404
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3405
                MOVE_FEINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_SLASH,
                MOVE_GLARE,
            },
            },
            {
#line 3410
            .nickname = COMPOUND_STRING("Robin"),
#line 3410
            .species = SPECIES_NIDOQUEEN,
#line 3410
            .gender = TRAINER_MON_FEMALE,
#line 3414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3412
            .ability = ABILITY_SHEER_FORCE,
#line 3411
            .lvl = 27,
#line 3413
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3414
                MOVE_THUNDERBOLT,
                MOVE_FIRE_PUNCH,
                MOVE_AERIAL_ACE,
                MOVE_BITE,
            },
            },
            {
#line 3419
            .nickname = COMPOUND_STRING("Falchion"),
#line 3419
            .species = SPECIES_HONEDGE,
#line 3419
            .gender = TRAINER_MON_MALE,
#line 3422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3420
            .lvl = 29,
#line 3421
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3422
                MOVE_METAL_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 3427
    [TRAINER_OC_TVA_MOBIUS] =
    {
#line 3428
        .trainerName = _("Mobius"),
#line 3429
        .trainerClass = TRAINER_CLASS_TVA_ANALYST,
#line 3430
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3431
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3432
        .items = { ITEM_X_SPEED, ITEM_FRESH_WATER },
#line 3433
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_WILL_SUICIDE | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_DOUBLE_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3435
            .nickname = COMPOUND_STRING("Jetski"),
#line 3435
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3440
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
#line 3439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
#line 3437
            .ability = ABILITY_NATURAL_CURE,
#line 3436
            .lvl = 25,
#line 3438
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3441
                MOVE_WATER_PULSE,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_RAPID_SPIN,
            },
            },
            {
#line 3446
            .nickname = COMPOUND_STRING("Night At"),
#line 3446
            .species = SPECIES_CROBAT,
#line 3446
            .gender = TRAINER_MON_MALE,
#line 3450
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
#line 3449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
#line 3447
            .lvl = 26,
#line 3448
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_CROSS_POISON,
                MOVE_AIR_CUTTER,
                MOVE_BITE,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 3456
            .nickname = COMPOUND_STRING("The Museum"),
#line 3456
            .species = SPECIES_AERODACTYL,
#line 3456
            .gender = TRAINER_MON_MALE,
#line 3461
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
#line 3460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
#line 3458
            .ability = ABILITY_PRESSURE,
#line 3457
            .lvl = 26,
#line 3459
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3463
            .nickname = COMPOUND_STRING("Ice Am Speed"),
#line 3463
            .species = SPECIES_WEAVILE,
#line 3463
            .gender = TRAINER_MON_MALE,
#line 3467
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
#line 3466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
#line 3464
            .lvl = 26,
#line 3465
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3468
                MOVE_FEINT_ATTACK,
                MOVE_ICY_WIND,
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
            },
            },
            {
#line 3473
            .nickname = COMPOUND_STRING("Lightning"),
#line 3473
            .species = SPECIES_JOLTEON,
#line 3473
            .gender = TRAINER_MON_MALE,
#line 3478
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
#line 3477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
#line 3475
            .ability = ABILITY_STATIC,
#line 3474
            .lvl = 30,
#line 3476
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3479
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_MUD_SLAP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3484
            .nickname = COMPOUND_STRING("McQueen"),
#line 3484
            .species = SPECIES_ELECTRODE,
#line 3484
            .gender = TRAINER_MON_MALE,
#line 3489
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
#line 3488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
#line 3486
            .ability = ABILITY_STATIC,
#line 3485
            .lvl = 30,
#line 3487
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3490
                MOVE_SHOCK_WAVE,
                MOVE_MEGA_DRAIN,
                MOVE_EMP_SPLOSION,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 3495
    [TRAINER_OC_BADGE4HINT] =
    {
#line 3496
        .trainerName = _("Guide"),
#line 3497
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 3498
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender = 
#line 3500
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3501
        .aiFlags = AI_FLAG_WILL_SUICIDE | AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3503
            .species = SPECIES_EXEGGCUTE,
#line 3503
            .gender = TRAINER_MON_MALE,
#line 3507
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 3506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3505
            .ability = ABILITY_GUTS,
#line 3504
            .lvl = 33,
#line 3508
            .ball = ITEM_SAFARI_BALL,
#line 3509
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3510
                MOVE_CONFUSION,
                MOVE_ABSORB,
                MOVE_SLEEP_POWDER,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 3515
    [TRAINER_OC_GYM4_PATRICE] =
    {
#line 3516
        .trainerName = _("Patrice"),
#line 3517
        .trainerClass = TRAINER_CLASS_LASS,
#line 3518
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 3519
F_TRAINER_FEMALE | 
#line 3520
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3522
        .items = { ITEM_CASTELIACONE, ITEM_FRESH_WATER },
#line 3521
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_HP_AWARE | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3524
            .species = SPECIES_BELLSPROUT,
#line 3524
            .gender = TRAINER_MON_MALE,
#line 3527
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 16, 16),
#line 3529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3526
            .ability = ABILITY_SKILL_LINK,
#line 3525
            .lvl = 27,
#line 3528
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3529
                MOVE_BULLET_SEED,
                MOVE_SLUDGE,
                MOVE_STUN_SPORE,
                MOVE_GROWTH,
            },
            },
            {
#line 3534
            .species = SPECIES_BRELOOM,
#line 3534
            .gender = TRAINER_MON_FEMALE,
#line 3537
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 16, 16),
#line 3539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3536
            .ability = ABILITY_TECHNICIAN,
#line 3535
            .lvl = 28,
#line 3538
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3539
                MOVE_MEGA_DRAIN,
                MOVE_MACH_PUNCH,
                MOVE_COUNTER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 3544
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3547
            .ev = TRAINER_PARTY_EVS(16, 16, 16, 16, 16, 16),
#line 3549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3546
            .ability = ABILITY_STRONG_JAW,
#line 3545
            .lvl = 31,
#line 3548
            .ball = ITEM_NEST_BALL,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3549
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_RAGE,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
        },
    },
#line 3554
    [TRAINER_OC_BADGE4] =
    {
#line 3555
        .trainerName = _("Crazy Dave"),
#line 3556
        .trainerClass = TRAINER_CLASS_GOVERNOR,
#line 3557
        .trainerPic = TRAINER_PIC_BADGE4,
        .encounterMusic_gender = 
#line 3559
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3562
        .items = { ITEM_SODA_POP, ITEM_LEMONADE, ITEM_WALL_MEAT, ITEM_CASTELIACONE },
#line 3561
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_WILL_SUICIDE | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON | AI_FLAG_PREFER_STATUS_MOVES,
#line 3560
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3564
            .nickname = COMPOUND_STRING("Puffapple"),
#line 3564
            .species = SPECIES_LUDICOLO,
#line 3564
            .gender = TRAINER_MON_MALE,
#line 3569
            .ev = TRAINER_PARTY_EVS(32, 32, 32, 32, 32, 32),
#line 3568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3566
            .ability = ABILITY_RAIN_DISH,
#line 3565
            .lvl = 31,
#line 3570
            .ball = ITEM_NEST_BALL,
#line 3567
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3571
                MOVE_BUBBLE_BEAM,
                MOVE_GIGA_DRAIN,
                MOVE_ZEN_HEADBUTT,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3576
            .nickname = COMPOUND_STRING("Spore-Shroom"),
#line 3576
            .species = SPECIES_BRELOOM,
#line 3576
            .gender = TRAINER_MON_MALE,
#line 3581
            .ev = TRAINER_PARTY_EVS(32, 32, 32, 32, 32, 32),
#line 3580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3578
            .ability = ABILITY_TECHNICIAN,
#line 3577
            .lvl = 34,
#line 3582
            .ball = ITEM_NEST_BALL,
#line 3579
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3583
                MOVE_GRASS_KNOT,
                MOVE_BRICK_BREAK,
                MOVE_MACH_PUNCH,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 3588
            .nickname = COMPOUND_STRING("Chomper"),
#line 3588
            .species = SPECIES_VICTREEBEL,
#line 3588
            .gender = TRAINER_MON_MALE,
#line 3593
            .ev = TRAINER_PARTY_EVS(32, 32, 32, 32, 32, 32),
#line 3592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3590
            .ability = ABILITY_CHLOROPHYLL,
#line 3589
            .lvl = 36,
#line 3594
            .ball = ITEM_NEST_BALL,
#line 3591
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3595
                MOVE_MEGA_DRAIN,
                MOVE_SLUDGE_BOMB,
                MOVE_BITE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3600
            .nickname = COMPOUND_STRING("Coco-Cannon"),
#line 3600
            .species = SPECIES_EXEGGUTOR,
#line 3600
            .gender = TRAINER_MON_MALE,
#line 3600
            .heldItem = ITEM_SITRUS_BERRY,
#line 3605
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 3604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3602
            .ability = ABILITY_SUN_SOAK,
#line 3601
            .lvl = 37,
#line 3606
            .ball = ITEM_NEST_BALL,
#line 3603
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3607
                MOVE_PSYCHIC,
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 3612
    [TRAINER_OC_B4_MAPLE] =
    {
#line 3613
        .trainerName = _("Maple"),
#line 3614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3615
        .trainerPic = TRAINER_PIC_MAPLE,
        .encounterMusic_gender = 
#line 3616
F_TRAINER_FEMALE | 
#line 3617
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 3620
        .items = { ITEM_MOOMOO_MILK, ITEM_FRESH_WATER, ITEM_CASTELIACONE, ITEM_MOOMOO_MILK },
#line 3618
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_ACE_POKEMON,
#line 3619
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3622
            .nickname = COMPOUND_STRING("Terra"),
#line 3622
            .species = SPECIES_LEAFEON,
#line 3622
            .gender = TRAINER_MON_FEMALE,
#line 3622
            .heldItem = ITEM_MIRACLE_SEED,
#line 3625
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 64, 0, 0),
#line 3624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3623
            .lvl = 36,
#line 3626
            .ball = ITEM_LUXURY_BALL,
#line 3627
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3628
                MOVE_RAZOR_LEAF,
                MOVE_BITE,
                MOVE_LEECH_SEED,
                MOVE_PSYCHO_CUT,
            },
            },
            {
#line 3633
            .nickname = COMPOUND_STRING("Eclair"),
#line 3633
            .species = SPECIES_CLODSIRE,
#line 3633
            .gender = TRAINER_MON_FEMALE,
#line 3633
            .heldItem = ITEM_MAGNET,
#line 3636
            .ev = TRAINER_PARTY_EVS(64, 64, 0, 0, 0, 0),
#line 3635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3634
            .lvl = 36,
#line 3637
            .ball = ITEM_POKE_BALL,
#line 3638
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3639
                MOVE_POISON_JAB,
                MOVE_MAGNITUDE,
                MOVE_THUNDERBOLT,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3644
            .nickname = COMPOUND_STRING("Artoria"),
#line 3644
            .species = SPECIES_ALTARIA,
#line 3644
            .gender = TRAINER_MON_FEMALE,
#line 3644
            .heldItem = ITEM_SITRUS_BERRY,
#line 3647
            .ev = TRAINER_PARTY_EVS(64, 64, 64, 64, 64, 64),
#line 3646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3645
            .lvl = 38,
#line 3648
            .ball = ITEM_MOON_BALL,
#line 3649
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3650
                MOVE_DRAGON_PULSE,
                MOVE_AIR_SLASH,
                MOVE_DRAGON_DANCE,
                MOVE_COTTON_GUARD,
            },
            },
        },
    },
#line 3655
    [TRAINER_OC_B4_SPIDEY] =
    {
#line 3656
        .trainerName = _("Spider-Man"),
#line 3657
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3658
        .trainerPic = TRAINER_PIC_SPIDEY,
        .encounterMusic_gender = 
#line 3660
            TRAINER_ENCOUNTER_MUSIC_MAY,
#line 3661
        .items = { ITEM_FRESH_WATER, ITEM_SODA_POP, ITEM_MOOMOO_MILK, ITEM_CASTELIACONE },
#line 3662
        .doubleBattle = TRUE,
#line 3663
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE,
#line 3664
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3666
            .species = SPECIES_GALVANTULA,
#line 3666
            .gender = TRAINER_MON_MALE,
#line 3666
            .heldItem = ITEM_SILVER_POWDER,
#line 3670
            .ev = TRAINER_PARTY_EVS(64, 64, 64, 64, 64, 64),
#line 3669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3668
            .ability = ABILITY_COMPOUND_EYES,
#line 3667
            .lvl = 37,
#line 3671
            .ball = ITEM_NET_BALL,
#line 3672
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_ELECTROWEB,
                MOVE_SIGNAL_BEAM,
                MOVE_STICKY_WEB,
                MOVE_DISCHARGE,
            },
            },
            {
#line 3678
            .species = SPECIES_LUCARIO,
#line 3678
            .gender = TRAINER_MON_MALE,
#line 3678
            .heldItem = ITEM_BLACK_BELT,
#line 3682
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 3681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3680
            .ability = ABILITY_STEADFAST,
#line 3679
            .lvl = 36,
#line 3683
            .ball = ITEM_GREAT_BALL,
#line 3684
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_AURA_SPHERE,
                MOVE_METAL_CLAW,
                MOVE_FEINT_ATTACK,
                MOVE_COUNTER,
            },
            },
            {
#line 3690
            .species = SPECIES_VANILLUXE,
#line 3690
            .gender = TRAINER_MON_MALE,
#line 3690
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 3693
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 64, 0),
#line 3692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3691
            .lvl = 37,
#line 3694
            .ball = ITEM_POKE_BALL,
#line 3695
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3696
                MOVE_BLIZZARD,
                MOVE_FREEZE_DRY,
                MOVE_TRI_ATTACK,
                MOVE_TAUNT,
            },
            },
        },
    },
