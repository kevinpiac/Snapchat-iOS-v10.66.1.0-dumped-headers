//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SOJUCustomStickerSyncBuilder : NSObject
{
    NSArray *_creationList;
    NSArray *_deletionList;
}

+ (id)withJUCustomStickerSync:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCreationList:(id)arg1;
- (id)setDeletionList:(id)arg1;

@end

