/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCoding>
{
    BBBulletin *_bulletin;
    unsigned long long _transactionID;
    long long _updateType;
}

@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3;

@end

