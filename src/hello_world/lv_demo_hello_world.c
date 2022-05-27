#include "lv_elleaech_demo.h"

void
lv_demo_hello_world(void)
{
    lv_obj_t *text_box = NULL;
    lv_obj_t *screen = lv_scr_act();

    if (NULL != screen)
    {
        text_box = lv_label_create(screen);
    }

    if (NULL != text_box)
    {
        lv_obj_align(text_box, LV_ALIGN_CENTER, 0, 0);
        lv_label_set_text(text_box, "Hello World!");
    }

}
