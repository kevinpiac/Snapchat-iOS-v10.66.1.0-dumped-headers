//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@protocol SCGalleryEntry;

@interface SCGalleryDiffableEntry : NSObject <IGListDiffable>
{
    id <SCGalleryEntry> _entry;
}

- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)entry;
- (unsigned long long)hash;
- (id)initWithEntry:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;

@end

