//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCChatMessageSavedStateBuilder : NSObject
{
    _Bool _saved;
    unsigned long long _version;
}

+ (id)withChatMessageSavedState:(id)arg1;
- (id)build;
- (id)setSaved:(_Bool)arg1;
- (id)setVersion:(unsigned long long)arg1;

@end

