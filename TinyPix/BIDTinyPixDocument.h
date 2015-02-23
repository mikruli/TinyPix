//
//  BIDTinyPixDocument.h
//  TinyPix
//
//  Created by Dejan Kumric on 2/23/15.
//  Copyright (c) 2015 Dejan Kumric. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDTinyPixDocument : UIDocument
// row and column range from 0 to 7
- (BOOL)stateAtRow:(NSUInteger)row column:(NSUInteger)column;
- (void)setState:(BOOL)state atRow:(NSUInteger)row column:(NSUInteger)column;
- (void)toggleStateAtRow:(NSUInteger)row column:(NSUInteger)column;
@end
