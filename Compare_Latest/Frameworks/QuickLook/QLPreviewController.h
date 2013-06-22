/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController
{
    QLPreviewControllerReserved *_reserved;
}

+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (id)titleForPreviewItem:(id)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (BOOL)_shouldPassThroughDocumentType:(id)arg1;
+ (id)_passThroughDocumentTypes;
+ (id)contentTypeForPreviewItem:(id)arg1;
- (void)_showGenericDisplayBundle;
- (void)_removeProgressiveUIAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_hideProgressiveUI;
- (void)progressViewWasTapped:(id)arg1;
- (void)_showProgressUI;
- (void)_scheduleDelayedTransitionIfNeeded;
- (void)_resumeDelayedTransition;
- (id)printInfoForDocumentInteractionControllerInPopOverState:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityItemForDocumentInteractionControllerInPopOverState:(id)arg1;
- (id)popOverStateViewControllerForPreview:(id)arg1;
- (id)_popOverState;
- (BOOL)_canPrint;
- (void)prepareForPrinting;
- (BOOL)canPrint;
- (void)playButtonAction:(id)arg1;
- (void)arrowsAction:(id)arg1;
- (void)rightArrowAction:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)customActionButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_unloadInternalViews;
- (void)_loadInternalViews;
- (void)_ensurePreviewContentController;
- (void)_configurePreviewContentController;
- (struct CGRect)_contentFrameForRemoteView;
- (void)_tryAddingPreviewControllerToViewHierarchy;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_removeChildPreviewContentControllerIfNeeded;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didUnloadItem:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_openURL:(id)arg1 withApplicationProxy:(id)arg2;
- (id)_documentProxyForPreviewItem:(id)arg1;
- (id)previewItemAtIndex:(int)arg1;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)_prepareDelayedAppearance;
@property int currentPreviewItemIndex;
@property(readonly) id <QLPreviewItem> currentPreviewItem;
@property id <QLPreviewControllerDataSource> dataSource;
- (void)_ensurePreviewItemIndex;
- (id)_currentPreviewItemURL;
- (void)_setCurrentPreviewItemURL:(id)arg1;
- (int)mode;
- (BOOL)translucent;
- (void)setTranslucent:(BOOL)arg1;
- (int)barStyle;
- (void)setBarStyle:(int)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (BOOL)showActionAsDefaultButton;
- (void)setShowActionAsDefaultButton:(BOOL)arg1;
- (BOOL)useCustomActionButton;
- (void)setUseCustomActionButton:(BOOL)arg1;
- (BOOL)blockRemoteImages;
- (void)setBlockRemoteImages:(BOOL)arg1;
@property id <QLPreviewControllerDelegate> delegate;
- (id)_interactionController;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;
- (void)_finishZoomingOut:(BOOL)arg1;
- (void)_finishZoomingIn:(BOOL)arg1;
- (void)_dismissFromFullScreenWithDuration:(double)arg1;
- (void)_prepareForFullScreenZoomOut;
- (void)_zoomToFullScreenWithDuration:(double)arg1;
- (void)_prepareForFullScreenZoomIn;
- (void)_setClippingViewActive:(BOOL)arg1;
- (void)_prepareTransitionImageForZoomingIn:(BOOL)arg1;
- (void)_removeFadingFilters;
- (void)_addFadeAnimationToView:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 duration:(double)arg4 withCurve:(int)arg5;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (BOOL)inZoomAnimation;
- (void)_viewWillStartPresentWithTransition;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_updateAVState;
- (void)_cancelOverlayTimer;
- (void)_setupOverlayTimer;
- (void)_fireOverlayIdleTimer;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_hideOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (void)_showOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (id)_currentNavigationController;
- (struct CGRect)contentFrameWithoutOverlay;
- (BOOL)overlayIsVisible;
- (void)_contentWasTapped;
- (void)_updateNavigationBar:(BOOL)arg1;
- (void)_hideSliderInNavigationBar;
- (void)_showSliderInNavigationBar;
- (void)_showBackgroundImage;
- (void)_hideBackgroundImage;
- (void)_updateActionItem;
- (void)_updateToolbar:(BOOL)arg1;
- (id)_indexFormatter;
- (void)_updateToolbarVisibility:(BOOL)arg1;
- (BOOL)_needsAVControls;
- (void)_createControls;
- (void)_updateRouteImages;
- (id)_newSegmentedArrowControl;
- (id)_fixedSpaceItemWithWidth:(float)arg1;
- (id)_flexibleSpaceItem;

@end
