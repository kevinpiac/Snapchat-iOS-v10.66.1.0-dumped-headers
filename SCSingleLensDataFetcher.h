//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLensDataFetcher;

@interface SCSingleLensDataFetcher : NSObject
{
    SCLensDataFetcher *_lensDataFetcher;
}

+ (id)_fetcherErrorWithCode:(long long)arg1 message:(id)arg2;
- (void).cxx_destruct;
- (void)fetchLens:(id)arg1 completionPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLensDataFetcher:(id)arg1;

@end

