/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputOrigI;
    NSNumber *inputOrigQ;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputWarmth; // @synthesize inputWarmth;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(copy, nonatomic) NSNumber *inputOrigQ; // @synthesize inputOrigQ;
@property(copy, nonatomic) NSNumber *inputOrigI; // @synthesize inputOrigI;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernel;
- (void)setDefaults;

@end
