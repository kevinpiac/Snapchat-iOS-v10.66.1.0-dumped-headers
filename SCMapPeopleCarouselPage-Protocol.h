//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMapCarouselPage-Protocol.h"

@class NSOrderedSet, SCMapPerson;

@protocol SCMapPeopleCarouselPage <SCMapCarouselPage>
- (void)bringPersonToTop:(SCMapPerson *)arg1;
@property(copy, nonatomic) NSOrderedSet *people;
- (void)reloadSections;
@end

