//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBitmojiImageJob.h"

@interface SCBitmojiFetchDataJob : SCBitmojiImageJob
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _transformBlock;
}

- (void).cxx_destruct;
- (void)completeWithImageData:(id)arg1 decodedImage:(id)arg2 responseContext:(id)arg3;
- (id)initWithImageParams:(id)arg1 contexts:(id)arg2 type:(int)arg3 feature:(long long)arg4 imageType:(unsigned long long)arg5 transform:(CDUnknownBlockType)arg6 completionQueue:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end
