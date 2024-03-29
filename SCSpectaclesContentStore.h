//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableSet;

@interface SCSpectaclesContentStore : NSObject <NSCoding>
{
    NSArray *_content;
    NSMutableSet *_internalContent;
}

- (void).cxx_destruct;
- (void)addContent:(id)arg1;
@property(copy) NSArray *content; // @synthesize content=_content;
- (id)contentWithName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableSet *internalContent; // @synthesize internalContent=_internalContent;
- (void)removeAllContent;
- (void)removeContent:(id)arg1;
- (id)undownloadedContentForComponent:(unsigned long long)arg1;

@end

