/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UINavigationBar, UIView;



@interface PLInteractiveStackControllerView : UIView <UINavigationBarDelegate>
{
    UIView *_top;
    UIView *_bottom;
    UIView *_interactive;
    UIView *_overlay;
    UINavigationBar *_navBar;
    NSInteger _orientation;
    struct { 
        unsigned int transitioning : 1; 
    } _controllerViewFlags;
}


- (void)_adjustViewFrame:(id)arg1;
- (void)transitionWillBegin;
- (void)transitionDidEnd;
- (void)setInteractiveView:(id)arg1 removePrevious:(BOOL)arg2;
- (void)setInteractiveView:(id)arg1;
- (id)interactiveView;
- (void)setTopViewAlpha:(float)arg1;
- (void)setOverlayView:(id)arg1;
- (id)bottomView;
- (id)topView;
- (void)setTopView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (id)navigationBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end