/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBSearchGestureObserver-Protocol.h"
#import "SPSearchAgentDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class SBSearchHeader, SBSearchResultsBackdropView, UIImage, UILabel, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView;

@interface SBSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UITextFieldDelegate>
{
    SBSearchHeader *_searchHeader;
    SBSearchResultsBackdropView *_tableBackdrop;
    UITableView *_tableView;
    UILabel *_noResultsLabel;
    UIView *_touchStealingView;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    void *_addressBook;
    UIImage *_placeHolderImages[15];
    BOOL _hasResults;
    id _fadeOutCompletionBlock;
    BOOL _expanded;
    BOOL _fadingOut;
}

@property(readonly, nonatomic, getter=isFadingOut) BOOL fadingOut; // @synthesize fadingOut=_fadingOut;
@property(readonly, nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_searchFieldEditingChanged;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2;
- (void)searchGesture:(id)arg1 changedOffset:(float)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)_resizeTableViewForPreferredContentSizeChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_handlePanRecognizer:(id)arg1;
- (void)_handleTapRecognizer:(id)arg1;
- (void)_fadeOutAndHideKeyboardIfNecessary:(id)arg1;
- (void)_fadeForLaunchWithDuration:(double)arg1 completion:(id)arg2;
- (void)_deselectTableViewCell;
- (void)_updateTableContents;
- (void)_startDownloadingAppForStoreIdentifier:(unsigned long long)arg1 bundleIdentifier:(id)arg2;
- (void)_populateCell:(id)arg1 atIndexPath:(id)arg2 inTableView:(id)arg3;
- (id)_auxiliaryTitleForABRecordID:(int)arg1;
- (id)_placeHolderImageForDomain:(unsigned int)arg1;
- (void)_updateHasResults;
- (void)_setExpanded:(BOOL)arg1;
- (BOOL)_showingKeyboard;
- (void)_setShowingKeyboard:(BOOL)arg1;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end
