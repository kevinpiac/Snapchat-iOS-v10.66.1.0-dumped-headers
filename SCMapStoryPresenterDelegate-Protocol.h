//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCMapStoryPresenting;

@protocol SCMapStoryPresenterDelegate <NSObject>

@optional
- (void)storyPresenterDidStartPresenting:(id <SCMapStoryPresenting>)arg1;
- (void)storyPresenterDidStopPresenting:(id <SCMapStoryPresenting>)arg1;
@end

