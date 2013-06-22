/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/WAKResponder.h>

@class NSMutableSet;

@interface WAKView : WAKResponder
{
    struct _WKViewContext viewContext;
    struct WKView *viewRef;
    NSMutableSet *subviewReferences;
}

+ (id)_wrapperForViewRef:(struct WKView *)arg1;
+ (id)focusView;
- (void)_handleEvent:(id)arg1;
- (id)nextResponder;
- (BOOL)_handleResponderCall:(int)arg1;
- (id)_initWithViewRef:(struct WKView *)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)window;
- (struct WKView *)_viewRef;
- (id)_subviewReferences;
- (id)subviews;
- (id)superview;
- (id)lastScrollableAncestor;
- (void)addSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)frameSizeChanged;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)needsDisplay;
- (void)display;
- (void)displayIfNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)displayRect:(struct CGRect)arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)visibleRect;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (void)lockFocus;
- (void)unlockFocus;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)mouse:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (BOOL)needsPanelToBecomeKey;
- (void)setNextKeyView:(id)arg1;
- (id)previousValidKeyView;
- (id)nextKeyView;
- (id)nextValidKeyView;
- (id)previousKeyView;
- (void)invalidateGState;
- (void)releaseGState;
- (BOOL)inLiveResize;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (unsigned int)autoresizingMask;
- (void)scrollPoint:(struct CGPoint)arg1;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)layout;
- (void)layoutIfNeeded;
- (void)setScale:(float)arg1;
- (float)scale;
- (void)_setDrawsOwnDescendants:(BOOL)arg1;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;

@end
