//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCChatUFSDeltaInformationBuilder : NSObject
{
    NSDictionary *_groupDeltas;
    NSDictionary *_oneOnOneChatDeltas;
    NSDictionary *_oneOnOneSnapDeltas;
}

+ (id)withChatUFSDeltaInformation:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setGroupDeltas:(id)arg1;
- (id)setOneOnOneChatDeltas:(id)arg1;
- (id)setOneOnOneSnapDeltas:(id)arg1;

@end

