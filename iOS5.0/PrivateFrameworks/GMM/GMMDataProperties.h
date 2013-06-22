/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GMMMapPoint, NSString;

@interface GMMDataProperties : PBCodable
{
    BOOL _hasDisabled;
    BOOL _disabled;
    BOOL _hasInfoLevel;
    int _infoLevel;
    BOOL _hasInfoValue;
    int _infoValue;
    int _imageWidth;
    int _imageHeight;
    BOOL _hasTileWidth;
    int _tileWidth;
    BOOL _hasTileHeight;
    int _tileHeight;
    NSString *_panoId;
    BOOL _hasNumZoomLevels;
    int _numZoomLevels;
    GMMMapPoint *_latLon;
    NSString *_copyright;
    NSString *_text;
    NSString *_streetRange;
    int _maxZoomLevel;
    int _radius;
    BOOL _hasImageSource;
    int _imageSource;
    BOOL _hasScene;
    int _scene;
}

@property(nonatomic) BOOL hasScene; // @synthesize hasScene=_hasScene;
@property(nonatomic) BOOL hasImageSource; // @synthesize hasImageSource=_hasImageSource;
@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(nonatomic) int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(retain, nonatomic) NSString *streetRange; // @synthesize streetRange=_streetRange;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) GMMMapPoint *latLon; // @synthesize latLon=_latLon;
@property(nonatomic) BOOL hasNumZoomLevels; // @synthesize hasNumZoomLevels=_hasNumZoomLevels;
@property(retain, nonatomic) NSString *panoId; // @synthesize panoId=_panoId;
@property(nonatomic) BOOL hasTileHeight; // @synthesize hasTileHeight=_hasTileHeight;
@property(nonatomic) BOOL hasTileWidth; // @synthesize hasTileWidth=_hasTileWidth;
@property(nonatomic) int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) BOOL hasInfoValue; // @synthesize hasInfoValue=_hasInfoValue;
@property(nonatomic) BOOL hasInfoLevel; // @synthesize hasInfoLevel=_hasInfoLevel;
@property(nonatomic) BOOL hasDisabled; // @synthesize hasDisabled=_hasDisabled;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) BOOL hasStreetRange;
@property(readonly, nonatomic) BOOL hasText;
@property(readonly, nonatomic) BOOL hasCopyright;
@property(nonatomic) int numZoomLevels; // @synthesize numZoomLevels=_numZoomLevels;
@property(nonatomic) int tileHeight; // @synthesize tileHeight=_tileHeight;
@property(nonatomic) int tileWidth; // @synthesize tileWidth=_tileWidth;
@property(nonatomic) int infoValue; // @synthesize infoValue=_infoValue;
@property(nonatomic) int infoLevel; // @synthesize infoLevel=_infoLevel;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
- (void)dealloc;

@end
