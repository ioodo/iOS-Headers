/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

#import "ViewControllerArchiveNode-Protocol.h"

@class UIViewController;

@interface UINavigationController (iPodConvenience) <ViewControllerArchiveNode>
- (void)swapInPreviouslySkippedViewControllers;
- (void)swapTopViewControllerWithContext:(id)arg1;
- (void)pushControllerForContext:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllersForTopContext:(id)arg1;
- (int)localizedCompare:(id)arg1;
@property(readonly, nonatomic) UIViewController *firstViewController;
- (void)restoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
@end
