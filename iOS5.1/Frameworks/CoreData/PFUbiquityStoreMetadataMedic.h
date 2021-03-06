/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PFUbiquityImportScanOperationDelegate-Protocol.h"

@class NSArray, NSError, NSPersistentStore, NSSQLiteConnection, NSString, PFUbiquityLocation;

@interface PFUbiquityStoreMetadataMedic : NSObject <PFUbiquityImportScanOperationDelegate>
{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
    NSSQLiteConnection *_connection;
    NSArray *_scanTransactionLogLocations;
    NSError *_scanOperationError;
    BOOL _scanOperationSuccess;
}

- (id)initWithStore:(id)arg1 andLocalPeerID:(id)arg2;
- (void)dealloc;
- (BOOL)recoverMetadataWithError:(id *)arg1;
- (BOOL)recoverPeerRangesWithStack:(id)arg1 error:(id *)arg2;
- (BOOL)recoverPeerStatesWithImportContext:(id)arg1 error:(id *)arg2;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id *)arg2;
- (void)scanOperationFinished:(id)arg1 withDiscoveredLogLocation:(id)arg2;
- (void)scanOperation:(id)arg1 failedWithError:(id)arg2;
- (void)scanOperation:(id)arg1 discoveredPeerStoreVersionLocations:(id)arg2;
@property(nonatomic) BOOL scanOperationSuccess; // @synthesize scanOperationSuccess=_scanOperationSuccess;
@property(retain, nonatomic) NSError *scanOperationError; // @synthesize scanOperationError=_scanOperationError;
@property(retain, nonatomic) NSArray *scanTransactionLogLocations; // @synthesize scanTransactionLogLocations=_scanTransactionLogLocations;
@property(readonly, nonatomic) NSSQLiteConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@end

