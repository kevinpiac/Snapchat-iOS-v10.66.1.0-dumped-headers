//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class SCGalleryOperaGroup;

@interface SCGalleryDiffableOperaGroup : NSObject <IGListDiffable>
{
    SCGalleryOperaGroup *_group;
    CDUnknownBlockType _snapComparator;
}

- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithOperaGroup:(id)arg1 snapComparator:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;

@end

