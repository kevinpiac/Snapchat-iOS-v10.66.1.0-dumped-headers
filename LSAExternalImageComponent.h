//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

@interface LSAExternalImageComponent : LSABaseComponent
{
}

+ (int)_orientationWithUIImageOrientation:(long long)arg1;
- (void)_setExternalImageWithFaceRect:(struct CGRect)arg1 errorCode:(long long)arg2 setImageBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setExternalImage:(id)arg1 faceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setExternalImageWithPath:(id)arg1 faceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;

@end
