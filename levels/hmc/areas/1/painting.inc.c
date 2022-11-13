#include "game/paintings.h"

// 0x07024CE0 - 0x070254E0
ALIGNED8 static const Texture hmc_seg7_texture_cotmc_pool_env[] = {
#include "levels/hmc/7.rgba16.inc.c"
};

// 0x07025518 - 0x07025594
const Texture *const hmc_seg7_painting_textures_cotmc[] = {
    hmc_seg7_texture_cotmc_pool_env,
};

// 0x0702551C (PaintingData)
const struct Painting cotmc_painting = {
    /* ID */ PAINTING_ID_HMC_COTMC,
    /* Image Count */ ARRAY_COUNT(hmc_seg7_painting_textures_cotmc),
    /* Textures */ hmc_seg7_painting_textures_cotmc,
    /* Texture w, h */ 32, 32,
    /* Texture Type */ PAINTING_ENV_MAP,
    /* Ripple Trigger */ RIPPLE_TRIGGER_CONTINUOUS,
    /* Shaded */ TRUE,
    /* Alpha */ 0xFF,
    /* Size */ 723.968018f, 723.968018f,
};
