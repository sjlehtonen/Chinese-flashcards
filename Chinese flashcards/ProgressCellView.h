//
//  ProgressCellView.h
//  Chinese flashcards
//
//  Created by Samuli Lehtonen on 31.8.2014.
//  Copyright (c) 2014 Samuli Lehtonen. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ProgressCellView : NSTableCellView

@property(nonatomic, weak) IBOutlet NSLevelIndicator *levelIndicator;

@end
