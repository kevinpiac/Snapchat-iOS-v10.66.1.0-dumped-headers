//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaModelProvider-Protocol.h"
#import "SCOperaModelToPagePropertiesConverter-Protocol.h"
#import "SCOperaPlaylistItemGroupDataModelResolver-Protocol.h"
#import "SCOperaPlaylistItemGroupResolver-Protocol.h"
#import "SCOperaPlaylistItemMediaPreparationController-Protocol.h"

@protocol SCOperaPlaylistDataSource <SCOperaModelProvider, SCOperaPlaylistItemGroupResolver, SCOperaModelToPagePropertiesConverter, SCOperaPlaylistItemMediaPreparationController, SCOperaPlaylistItemGroupDataModelResolver>
- (_Bool)needToPrepareMediaBeforeDisplay;
@end

