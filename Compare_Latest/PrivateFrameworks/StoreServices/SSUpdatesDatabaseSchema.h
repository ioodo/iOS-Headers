/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SSUpdatesDatabaseSchema : NSObject
{
}

+ (void)_migrate7000to7001InDatabase:(id)arg1;
+ (BOOL)databaseRequiresMigration:(id)arg1;
+ (id)databasePath;
+ (void)createSchemaInDatabase:(id)arg1 withName:(id)arg2;

@end
