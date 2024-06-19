/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler),
    slideMenuStateChangedCallback(this, &Screen2ViewBase::slideMenuStateChangedCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(79, 78, 77));
    add(box1);

    circle1.setPosition(202, 0, 272, 272);
    circle1.setCenter(135.4f, 136.3f);
    circle1.setRadius(135);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle1.setPainter(circle1Painter);
    add(circle1);

    compass.setXY(202, 0);
    compass.setBitmap(touchgfx::Bitmap(BITMAP_COMPASS_ID));
    compass.setWidth(271);
    compass.setHeight(271);
    compass.setBitmapPosition(-0.5f, -0.5f);
    compass.setScale(1.0f);
    compass.setCameraDistance(1000.0f);
    compass.setOrigo(135.5f, 135.5f, 1000.0f);
    compass.setCamera(135.5f, 135.5f);
    compass.setAngles(0.0f, 0.0f, 0.0f);
    compass.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);
    add(compass);

    heading.setXY(203, 0);
    heading.setBitmap(touchgfx::Bitmap(BITMAP_HDG_ID));
    heading.setWidth(271);
    heading.setHeight(271);
    heading.setBitmapPosition(0.0f, 0.0f);
    heading.setScale(1.0f);
    heading.setCameraDistance(1000.0f);
    heading.setOrigo(135.5f, 135.5f, 1000.0f);
    heading.setCamera(135.5f, 135.5f);
    heading.setAngles(0.0f, 0.0f, 0.0f);
    heading.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);
    add(heading);

    image1.setXY(307, 106);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_AIRPLANE_ID));
    add(image1);

    textArea1.setPosition(313, 81, 50, 25);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 255, 106));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6SRL).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3XSI));
    add(textArea1);

    shape1.setPosition(298, 57, 80, 13);
    shape1.setOrigin(0.0f, 0.0f);
    shape1.setScale(1.0f, 1.0f);
    shape1.setAngle(0.0f);
    shape1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    shape1.setPainter(shape1Painter);
    const touchgfx::AbstractShape::ShapePoint<float> shape1Points[3] = { { 40.0f, 0.0f }, { 80.0f, 80.0f }, { 0.0f, 80.0f } };
    shape1.setShape(shape1Points);
    add(shape1);

    boxWithBorder1_1.setPosition(19, 119, 36, 36);
    boxWithBorder1_1.setColor(touchgfx::Color::getColorFromRGB(61, 32, 32));
    boxWithBorder1_1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1_1.setBorderSize(1);
    add(boxWithBorder1_1);

    boxWithBorder1.setPosition(19, 75, 36, 36);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(46, 42, 42));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(1);
    add(boxWithBorder1);

    boxWithBorder2.setPosition(64, 105, 75, 22);
    boxWithBorder2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder2.setBorderColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorder2.setBorderSize(1);
    add(boxWithBorder2);

    textArea2.setXY(70, 105);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 255, 106));
    textArea2.setLinespacing(0);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_95FV).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.resizeToCurrentText();
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZJ2T));
    add(textArea2);

    button_up.setXY(19, 75);
    button_up.setBitmaps(touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_ARROW_CIRCLE_UP_36_36_FFFFFF_SVG_ID), touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_PRESSED_ID));
    button_up.setDelay(12);
    button_up.setInterval(1);
    button_up.setAction(buttonCallback);
    add(button_up);

    button_down.setXY(19, 119);
    button_down.setBitmaps(touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_ARROW_CIRCLE_DOWN_36_36_FFFFFF_SVG_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_PRESSED_ID));
    button_down.setDelay(12);
    button_down.setInterval(1);
    button_down.setAction(buttonCallback);
    add(button_down);

    slideMenu1.setXY(0, -1);
    slideMenu1.setup(touchgfx::SlideMenu::EAST,
        touchgfx::Bitmap(BITMAP_LEFT_SLIDE_MENU_BACKGROUND_ID),
        touchgfx::Bitmap(BITMAP_LEFT_SLIDE_MENU_BUTTON_ID),
        touchgfx::Bitmap(BITMAP_LEFT_SLIDE_MENU_BUTTON_ID),
        0, 0, 50, 0);
    slideMenu1.setState(touchgfx::SlideMenu::COLLAPSED);
    slideMenu1.setVisiblePixelsWhenCollapsed(25);
    slideMenu1.setHiddenPixelsWhenExpanded(0);
    slideMenu1.setAnimationEasingEquation(touchgfx::EasingEquations::cubicEaseInOut);
    slideMenu1.setAnimationDuration(18);
    slideMenu1.setExpandedStateTimeout(180);
    slideMenu1.setStateChangedCallback(slideMenuStateChangedCallback);
    FPS.setXY(-1, 150);
    FPS.setBitmaps(touchgfx::Bitmap(BITMAP_MENU_TOGGLE_BUTTON_01_ID), touchgfx::Bitmap(BITMAP_SQUARE_ID));
    FPS.setAction(buttonCallback);
    slideMenu1.add(FPS);

    textAreaFPS.setXY(4, 162);
    textAreaFPS.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaFPS.setLinespacing(0);
    textAreaFPS.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VXTM));
    slideMenu1.add(textAreaFPS);

    ENG.setXY(-1, 100);
    ENG.setBitmaps(touchgfx::Bitmap(BITMAP_MENU_TOGGLE_BUTTON_01_ID), touchgfx::Bitmap(BITMAP_MENU_TOGGLE_BUTTON_01_ID));
    ENG.setLabelText(touchgfx::TypedText(T___SINGLEUSE_35L4));
    ENG.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ENG.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ENG.setAction(buttonCallback);
    slideMenu1.add(ENG);

    NAV.setXY(-1, 50);
    NAV.setBitmaps(touchgfx::Bitmap(BITMAP_SQUARE_ID), touchgfx::Bitmap(BITMAP_SQUARE_ID));
    NAV.setLabelText(touchgfx::TypedText(T___SINGLEUSE_KX09));
    NAV.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    NAV.setLabelColorPressed(touchgfx::Color::getColorFromRGB(0, 0, 0));
    slideMenu1.add(NAV);

    HOR.setXY(-1, 0);
    HOR.setBitmaps(touchgfx::Bitmap(BITMAP_MENU_TOGGLE_BUTTON_01_ID), touchgfx::Bitmap(BITMAP_MENU_TOGGLE_BUTTON_01_ID));
    HOR.setLabelText(touchgfx::TypedText(T___SINGLEUSE_W11F));
    HOR.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    HOR.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    HOR.setAction(buttonCallback);
    slideMenu1.add(HOR);

    add(slideMenu1);

    fps_text2.setPosition(93, 223, 110, 24);
    fps_text2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    fps_text2.setLinespacing(0);
    Unicode::snprintf(fps_text2Buffer, FPS_TEXT2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_5ELS).getText());
    fps_text2.setWildcard(fps_text2Buffer);
    fps_text2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6IKG));
    add(fps_text2);

    ms2.setPosition(93, 247, 110, 24);
    ms2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    ms2.setLinespacing(0);
    Unicode::snprintf(ms2Buffer, MS2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_28D9).getText());
    ms2.setWildcard(ms2Buffer);
    ms2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4HC5));
    add(ms2);
}

Screen2ViewBase::~Screen2ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &HOR)
    {
        //Interaction1
        //When HOR clicked change screen to Screen1
        //Go to Screen1 with screen transition towards South
        application().gotoScreen1ScreenCoverTransitionSouth();
    }
    if (&src == &button_up)
    {
        //Interaction3
        //When button_up clicked call virtual function
        //Call up_hdg
        up_hdg();
    }
    if (&src == &button_down)
    {
        //Interaction4
        //When button_down clicked call virtual function
        //Call down_hdg
        down_hdg();
    }
    if (&src == &ENG)
    {
        //Interaction5
        //When ENG clicked change screen to Screen3
        //Go to Screen3 with screen transition towards North
        application().gotoScreen3ScreenSlideTransitionNorth();
        //Interaction6
        //When ENG clicked reset timer slideMenu1
        //reset expanded state timer on slideMenu1
        slideMenu1.resetExpandedStateTimer();
    }
    if (&src == &FPS)
    {
        //Interaction7
        //When FPS clicked call virtual function
        //Call showFPS
        showFPS();
    }
}

void Screen2ViewBase::slideMenuStateChangedCallbackHandler(const touchgfx::SlideMenu& src)
{
    if (&src == &slideMenu1)
    {
        //Interaction2
        //When slideMenu1 state changed reset timer slideMenu1
        //reset expanded state timer on slideMenu1
        slideMenu1.resetExpandedStateTimer();
    }
}
