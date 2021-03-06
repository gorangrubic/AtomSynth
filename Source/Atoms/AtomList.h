/*
 * AtomList.h
 *
 *  Created on: Dec 3, 2016
 *      Author: josh
 */

#ifndef SOURCE_ATOMLIST_H_
#define SOURCE_ATOMLIST_H_

#include <vector>

#include "Atom.h"
#ifdef INCLUDE_ATOMS
#include "Basic/Input.h"
#include "Basic/Output.h"
#include "Generation/BasicOsc.h"
#include "Generation/Noise.h"
#include "Generation/Envelope.h"
#include "Processing/Amplifier.h"
#include "Processing/Mixer.h"
#include "Filters/Comb.h"
#include "Filters/FirLowpass.h"
#include "Filters/FirHighpass.h"
#include "Transforms/LfoTuner.h"
#include "Transforms/Pitch.h"
#include "Transforms/Remap.h"
#ifdef INCLUDE_DEBUG_ATOMS
#include "Debug/Multiply.h"
#include "Debug/FirTest.h"
#endif /* INCLUDE_DEBUG_ATOMS */
#endif /* INCLUDE_ATOMS */

namespace AtomSynth {

std::vector<AtomController *> getAllAtoms() {
	std::vector<AtomController *> toReturn;
#ifdef INCLUDE_ATOMS
	toReturn.push_back(new InputController());
	toReturn.push_back(new OutputController());
	toReturn.push_back(new BasicOscController());
	toReturn.push_back(new NoiseController());
	toReturn.push_back(new EnvelopeController());
	toReturn.push_back(new AmplifierController());
	toReturn.push_back(new MixerController());
	toReturn.push_back(new CombController());
	toReturn.push_back(new FirLowpassController());
	toReturn.push_back(new FirHighpassController());
	toReturn.push_back(new LfoTunerController());
	toReturn.push_back(new PitchController());
	toReturn.push_back(new RemapController());
#ifdef INCLUDE_DEBUG_ATOMS
	toReturn.push_back(new MultiplyController());
	toReturn.push_back(new FirTestController());
#endif /* INCLUDE_DEBUG_ATOMS */
#endif /* INCLUDE_ATOMS */
	return toReturn;
}

}

#endif /* SOURCE_ATOMLIST_H_ */
