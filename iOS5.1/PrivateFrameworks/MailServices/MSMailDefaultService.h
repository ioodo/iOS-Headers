/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedMessagingCenter, NSLock;

@interface MSMailDefaultService : NSObject
{
    BOOL _shouldLaunch;
    NSLock *_lock;
    CPDistributedMessagingCenter *_server;
    CPDistributedMessagingCenter *_action;
    NSObject *_delegate;
}

+ (BOOL)shouldUseNewThreadingModel;
+ (void)useNewThreadingModel;
+ (id)smi_serverCommandName;
@property(nonatomic) BOOL shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunch;
- (void)cancel;
- (id)_activeAction;
- (BOOL)_callMailServicesMethod:(id)arg1 arg:(id)arg2 reply:(id *)arg3 error:(id *)arg4 responseSelector:(SEL)arg5;
- (void)_setActiveAction:(id)arg1 responseSelector:(SEL)arg2;
- (void)_setServer:(id)arg1;
@property(nonatomic) NSObject *delegate;
- (void)_mailServiceDidTerminate:(id)arg1;
- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;
- (BOOL)_unitTestsAreEnabled;
- (void)_smi_notifyClientDidFinishWithError:(id)arg1;
- (id)_copyServer;
- (void)dealloc;
- (id)init;

@end

