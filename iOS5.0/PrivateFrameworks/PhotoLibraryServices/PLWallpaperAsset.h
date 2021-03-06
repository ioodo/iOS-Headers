/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@class NSURL;

@interface PLWallpaperAsset : PLManagedAsset
{
}

+ (id)insertIntoPhotoLibrary:(id)arg1 withImageURL:(id)arg2 thumbnailURL:(id)arg3;
- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;
- (id)wallpaperFullScreenImage;
- (void)prepareForDeletion;
- (BOOL)allowsWallpaperEditing;
- (id)indexSheetImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;
- (id)imageWithFormat:(int)arg1;
@property(retain, nonatomic) NSURL *thumbnailURL;
@property(retain, nonatomic) NSURL *imageURL;

@end

