//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFaceDetectionResult : NSObject <NSCopying>
{
    _Bool _leftEyeClosed;
    _Bool _rightEyeClosed;
    _Bool _hasSmile;
    struct CGPoint _leftEyePosition;
    struct CGPoint _rightEyePosition;
    struct CGPoint _mouthPosition;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasSmile; // @synthesize hasSmile=_hasSmile;
- (unsigned long long)hash;
- (id)initWithBounds:(struct CGRect)arg1 leftEyePosition:(struct CGPoint)arg2 leftEyeClosed:(_Bool)arg3 rightEyePosition:(struct CGPoint)arg4 rightEyeClosed:(_Bool)arg5 mouthPosition:(struct CGPoint)arg6 hasSmile:(_Bool)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property(readonly, nonatomic) struct CGPoint leftEyePosition; // @synthesize leftEyePosition=_leftEyePosition;
@property(readonly, nonatomic) struct CGPoint mouthPosition; // @synthesize mouthPosition=_mouthPosition;
@property(readonly, nonatomic) _Bool rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property(readonly, nonatomic) struct CGPoint rightEyePosition; // @synthesize rightEyePosition=_rightEyePosition;

@end

