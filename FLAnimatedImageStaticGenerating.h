//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FLAnimatedImageGenerating-Protocol.h"

@class NSArray, NSString;

@interface FLAnimatedImageStaticGenerating : NSObject <FLAnimatedImageGenerating>
{
    NSArray *_images;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithImages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

