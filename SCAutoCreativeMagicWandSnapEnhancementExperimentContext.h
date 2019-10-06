//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAutoCreativeMagicWandSnapEnhancementExperimentContext : SCExperimentContext
{
    _Bool _applyiOSFilters;
    _Bool _applyPortraitFilter;
    _Bool _applySkyFilter;
    _Bool _applyVisualContextFilter;
    _Bool _applyVenueFilter;
    _Bool _applyFaceSmoothingFilter;
    _Bool _applyOrderedCarouselFilter;
    _Bool _showMagicWandForiOSFilters;
}

@property(readonly, nonatomic) _Bool applyFaceSmoothingFilter; // @synthesize applyFaceSmoothingFilter=_applyFaceSmoothingFilter;
@property(readonly, nonatomic) _Bool applyOrderedCarouselFilter; // @synthesize applyOrderedCarouselFilter=_applyOrderedCarouselFilter;
@property(readonly, nonatomic) _Bool applyPortraitFilter; // @synthesize applyPortraitFilter=_applyPortraitFilter;
@property(readonly, nonatomic) _Bool applySkyFilter; // @synthesize applySkyFilter=_applySkyFilter;
@property(readonly, nonatomic) _Bool applyVenueFilter; // @synthesize applyVenueFilter=_applyVenueFilter;
@property(readonly, nonatomic) _Bool applyVisualContextFilter; // @synthesize applyVisualContextFilter=_applyVisualContextFilter;
@property(readonly, nonatomic) _Bool applyiOSFilters; // @synthesize applyiOSFilters=_applyiOSFilters;
- (id)experimentName;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool showMagicWandForiOSFilters; // @synthesize showMagicWandForiOSFilters=_showMagicWandForiOSFilters;

@end
