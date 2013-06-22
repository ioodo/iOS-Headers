/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKViewController.h>

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class ABPeoplePickerNavigationController, GKImageBackgroundView, GKRecipientGenerator, GKRecipientSelectionView, GKUITheme, NSDictionary, NSMutableArray, NSNumber, NSString, UIImageView, UINavigationItem, UIPopoverController, UIResponder, UITextView, UIView;

@interface GKAbstractComposeController : GKViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UITextViewDelegate, UIPopoverControllerDelegate>
{
    UINavigationItem *_navItem;
    GKImageBackgroundView *_backgroundView;
    UIImageView *_messageView;
    struct _NSRange _lastSelectedRange;
    id _composeDelegate;
    NSMutableArray *_recipients;
    unsigned int _needsSetupForNewRecipient:1;
    unsigned int _visible:1;
    unsigned int _newRecipient:1;
    GKRecipientGenerator *_recipientGenerator;
    NSDictionary *_abPropertiesCache;
    GKUITheme *_theme;
    GKRecipientSelectionView *_recipientSelectionView;
    UIView *_beneathMessageView;
    UITextView *_messageEntryView;
    ABPeoplePickerNavigationController *_peoplePickerController;
    UIPopoverController *_composePopoverController;
    UIResponder *_savedFirstResponder;
    struct CGRect _previousKeyboardFrame;
    int _savedStatusBarStyle;
    NSString *_lastMessage;
    UIView *_accessoryView;
    BOOL _mightHaveAccessoryView;
    BOOL _composeFieldsHidden;
    int _popoverHideCount;
    NSNumber *_rid;
    BOOL _sending;
}

@property(nonatomic) BOOL sending; // @synthesize sending=_sending;
@property(retain, nonatomic) NSNumber *rid; // @synthesize rid=_rid;
@property(nonatomic) int popoverHideCount; // @synthesize popoverHideCount=_popoverHideCount;
@property(nonatomic) BOOL composeFieldsHidden; // @synthesize composeFieldsHidden=_composeFieldsHidden;
@property(nonatomic) BOOL mightHaveAccessoryView; // @synthesize mightHaveAccessoryView=_mightHaveAccessoryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NSString *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(nonatomic) int savedStatusBarStyle; // @synthesize savedStatusBarStyle=_savedStatusBarStyle;
@property(nonatomic) struct CGRect previousKeyboardFrame; // @synthesize previousKeyboardFrame=_previousKeyboardFrame;
@property(retain, nonatomic) UIResponder *savedFirstResponder; // @synthesize savedFirstResponder=_savedFirstResponder;
@property(retain, nonatomic) UIPopoverController *composePopoverController; // @synthesize composePopoverController=_composePopoverController;
@property(readonly, nonatomic) ABPeoplePickerNavigationController *peoplePickerController; // @synthesize peoplePickerController=_peoplePickerController;
@property(readonly, nonatomic) UITextView *messageEntryView; // @synthesize messageEntryView=_messageEntryView;
@property(readonly, nonatomic) UIView *beneathMessageView; // @synthesize beneathMessageView=_beneathMessageView;
@property(readonly, nonatomic) GKRecipientSelectionView *recipientSelectionView; // @synthesize recipientSelectionView=_recipientSelectionView;
@property(nonatomic) id composeDelegate; // @synthesize composeDelegate=_composeDelegate;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)_resetEntryViewSizeForInterfaceOrientation:(int)arg1 withKeyboardFrame:(struct CGRect)arg2;
- (void)_resetEntryViewSize;
- (id)fadeTransition;
- (void)makeRecipientEntryViewActive;
- (void)makeRecipientEntryViewInactive;
- (void)makeContentEntryViewActive;
- (void)makeContentEntryViewInactive;
- (id)_recipientGenerator;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)recipientSelectionView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionViewReturnPressed:(id)arg1;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void *)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissPeoplePicker;
- (void)popFirstResponder;
- (void)pushFirstResponder;
- (void)addRecipient:(void *)arg1 property:(int)arg2 identifier:(int)arg3 address:(id)arg4 makingContentEntryViewActive:(BOOL)arg5;
- (void)addRecipients:(id)arg1;
- (BOOL)isNewRecipient;
- (void)setupForNewRecipient;
- (id)proposedRecipients;
@property(readonly, nonatomic) NSMutableArray *recipients; // @synthesize recipients=_recipients;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)composeControllerCancelled:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)updateNavigationButtons;
- (void)updateTitle;
- (id)navigationItem;
- (void)updateEnablednessOfSendButton;
- (void)_setupRecipientSelectionView;
- (void)reload:(BOOL)arg1;
- (void)_localeChanged:(id)arg1;
- (void)layoutSubviewsForOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)showPopoverAnimated:(BOOL)arg1;
- (void)hidePopoverAnimated:(BOOL)arg1;
@property(nonatomic) BOOL isPopoverHidden; // @dynamic isPopoverHidden;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)_gkBackgroundView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_resetPopoverPosition;
- (void)viewDidUnload;
- (void)loadView;
- (void)updateViewVisibility;
- (void)dealloc;
- (id)init;

@end
