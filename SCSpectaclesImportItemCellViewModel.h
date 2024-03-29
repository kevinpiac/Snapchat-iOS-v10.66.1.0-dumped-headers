//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@protocol SCSpectaclesContent;

@interface SCSpectaclesImportItemCellViewModel : NSObject <IGListDiffable>
{
    id <SCSpectaclesContent> _content;
    long long _overflowCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCSpectaclesContent> content; // @synthesize content=_content;
- (id)diffIdentifier;
- (id)initWithWithContent:(id)arg1 overflowCount:(long long)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) long long overflowCount; // @synthesize overflowCount=_overflowCount;

@end

