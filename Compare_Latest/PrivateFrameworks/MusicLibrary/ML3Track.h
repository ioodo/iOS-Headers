/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Entity.h>

@interface ML3Track : ML3Entity
{
}

+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(id)arg3;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (_Bool)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;
+ (_Bool)trackValueAreInTheCloud:(id)arg1;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long *)arg3;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)unsettableProperties;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)TVShowEpisodesDefaultOrderingProperties;
+ (id)podcastsEpisodesDefaultOrderingProperties;
+ (id)composersDefaultOrderingProperties;
+ (id)albumAndArtistDefaultOrderingProperties;
+ (id)albumAllArtistsDefaultOrderingProperties;
+ (id)artistsDefaultOrderingProperties;
+ (id)artistAllAlbumsDefaultOrderingProperties;
+ (id)podcastsDefaultOrderingProperties;
+ (id)genresDefaultOrderingProperties;
+ (id)albumsDefaultOrderingProperties;
+ (id)defaultOrderingProperties;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (void)updateStoreBookmarkMetadataIdentifier;
- (void)updateCollectionCloudStatus;
- (id)artworkCacheIDAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (id)rawIntegrity;
- (_Bool)updateIntegrity;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (id)absoluteFilePath;

@end

