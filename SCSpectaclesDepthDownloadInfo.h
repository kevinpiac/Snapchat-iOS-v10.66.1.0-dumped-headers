//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;

@interface SCSpectaclesDepthDownloadInfo : NSObject
{
    NSError *_error;
    NSMutableArray *_progressHandlers;
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)init;
@property(retain, nonatomic) NSMutableArray *progressHandlers; // @synthesize progressHandlers=_progressHandlers;

@end

