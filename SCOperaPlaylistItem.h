//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCOperaPlaylistItemGroup;

@interface SCOperaPlaylistItem : NSObject
{
    NSString *_type;
    NSString *__id;
    NSArray *_items;
    SCOperaPlaylistItem *_parent;
    SCOperaPlaylistItemGroup *_group;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (id)description;
@property(nonatomic) __weak SCOperaPlaylistItemGroup *group; // @synthesize group=_group;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 ID:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SCOperaPlaylistItem *parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

@end
