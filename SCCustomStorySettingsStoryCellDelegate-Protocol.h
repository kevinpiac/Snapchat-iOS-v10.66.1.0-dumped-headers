//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCustomStorySettingsStoryCell, Story;

@protocol SCCustomStorySettingsStoryCellDelegate <NSObject>
- (void)deletePressedForStory:(Story *)arg1;
- (void)savePressedForStory:(Story *)arg1;
- (void)viewersPressedInCell:(SCCustomStorySettingsStoryCell *)arg1 forMyStory:(Story *)arg2;
@end
