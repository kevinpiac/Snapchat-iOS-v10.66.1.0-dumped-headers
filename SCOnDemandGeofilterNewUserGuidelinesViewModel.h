//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterNewUserGuidelinesViewModel-Protocol.h"

@class NSString, UIImage;

@interface SCOnDemandGeofilterNewUserGuidelinesViewModel : NSObject <SCOnDemandGeofilterNewUserGuidelinesViewModel>
{
    UIImage *_imageLeft;
    UIImage *_imageMid;
    UIImage *_imageRight;
    double _leftRotate;
    double _rightRotate;
    double _midRotate;
    NSString *_midImageUrlString;
    NSString *_leftImageUrlString;
    NSString *_rightImageUrlString;
    NSString *_containerImageUrlString;
    NSString *_continueButtonName;
    struct CGPoint _imageViewLeftOrigin;
    struct CGSize _imageViewLeftSize;
    struct CGPoint _imageViewMidOrigin;
    struct CGSize _imageViewMidSize;
    struct CGPoint _imageViewRightOrigin;
    struct CGSize _imageViewRightSize;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *containerImageUrlString; // @synthesize containerImageUrlString=_containerImageUrlString;
@property(readonly, copy, nonatomic) NSString *continueButtonName; // @synthesize continueButtonName=_continueButtonName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) UIImage *imageLeft; // @synthesize imageLeft=_imageLeft;
@property(readonly, copy, nonatomic) UIImage *imageMid; // @synthesize imageMid=_imageMid;
@property(readonly, copy, nonatomic) UIImage *imageRight; // @synthesize imageRight=_imageRight;
@property(readonly, nonatomic) struct CGPoint imageViewLeftOrigin; // @synthesize imageViewLeftOrigin=_imageViewLeftOrigin;
@property(readonly, nonatomic) struct CGSize imageViewLeftSize; // @synthesize imageViewLeftSize=_imageViewLeftSize;
@property(readonly, nonatomic) struct CGPoint imageViewMidOrigin; // @synthesize imageViewMidOrigin=_imageViewMidOrigin;
@property(readonly, nonatomic) struct CGSize imageViewMidSize; // @synthesize imageViewMidSize=_imageViewMidSize;
@property(readonly, nonatomic) struct CGPoint imageViewRightOrigin; // @synthesize imageViewRightOrigin=_imageViewRightOrigin;
@property(readonly, nonatomic) struct CGSize imageViewRightSize; // @synthesize imageViewRightSize=_imageViewRightSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageViewLeftOrigin:(struct CGPoint)arg1 imageViewLeftSize:(struct CGSize)arg2 imageLeft:(id)arg3 imageViewMidOrigin:(struct CGPoint)arg4 imageViewMidSize:(struct CGSize)arg5 imageMid:(id)arg6 imageViewRightOrigin:(struct CGPoint)arg7 imageViewRightSize:(struct CGSize)arg8 imageRight:(id)arg9 leftRotate:(double)arg10 rightRotate:(double)arg11 midRotate:(double)arg12 midImageUrlString:(id)arg13 leftImageUrlString:(id)arg14 rightImageUrlString:(id)arg15 containerImageUrlString:(id)arg16 continueButtonName:(id)arg17;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *leftImageUrlString; // @synthesize leftImageUrlString=_leftImageUrlString;
@property(readonly, nonatomic) double leftRotate; // @synthesize leftRotate=_leftRotate;
@property(readonly, copy, nonatomic) NSString *midImageUrlString; // @synthesize midImageUrlString=_midImageUrlString;
@property(readonly, nonatomic) double midRotate; // @synthesize midRotate=_midRotate;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *rightImageUrlString; // @synthesize rightImageUrlString=_rightImageUrlString;
@property(readonly, nonatomic) double rightRotate; // @synthesize rightRotate=_rightRotate;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

