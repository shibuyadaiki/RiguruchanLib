#pragma once

enum TEXTURE_ID
{
	WOOD_TEXTURE,
	FLOOR_TEXTURE,
	MOUSE_TEXTURE,
	CURSOR_TEXTURE
};

enum FONT_ID{
	TEST_FONT
};

enum MODEL_ID{
	PLAYER_MODEL,
	FLOOR_MODEL,
	CUBE_MODEL,
	SPHERE_MODEL,
	STAGE_MODEL,
};

enum OCT_ID{
	NULL_OCT,
	STAGE_OCT,
	ENEMY_OCT,
};

enum BGM_ID{
	TITLE_BGM
};

enum SE_ID{
	BOOM_SE
};

enum ANIM_ID{
	NULL_ANIM,
	BOOM_ANIM,
	WAIT_ANIM,
	WARKFRONT_ANIM,
	WARKLEFT_ANIM,
	WARKBACK_ANIM,
	WARKRIGHT_ANIM,
	JUMP_ANIM,
	DURINGJUMP_ANIM,
	TURNLEFT_ANIM,
	STEPFRONT_ANIM,
	STEPBACK_ANIM,
	STEPLEFT_ANIM,
	STEPRIGHT_ANIM,
	ROUND_ANIM,
};

enum SHADER_ID{
	PLAYER_SHADER,
	STAGE_SHADER,
	TEXTURE_SHADER,
	SPHERE_SHADER,
	FONT_SHADER,
	LINE_SHADER,
	CUBE_SHADER
};

enum ACTOR_ID{
	BEGIN_ACTOR,
	PLAYER_ACTOR,
	ENEMY_ACTOR,
	STAGE_ACTOR,
	THREAD_ACTOR,
	UI_ACTOR,
	END_ACTOR,
};

enum COL_ID{
	SPHERE_SPHERE_COLL,
	RAY_MODEL_COLL,
	CAPSULE_MODEL_COLL,
	RAY_MODEL_NATURAL_COLL,
	RAY_MODEL_STEP_COLL,
	SPHERE_MODEL_COLL,
	SPHERE_MODEL_NATURAL_COLL,
	OBB_OBB_COLL,
	SPHERE_MODEL_STEP,
};