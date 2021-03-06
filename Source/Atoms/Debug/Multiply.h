#ifndef ATOM_Multiply_HEADER
#define ATOM_Multiply_HEADER

/* BEGIN AUTO-GENERATED INCLUDES */
#include "Atoms/Atom.h"
/* END AUTO-GENERATED INCLUDES */

/* BEGIN USER-DEFINED INCLUDES */

/* END USER-DEFINED INCLUDES */

namespace AtomSynth {

class SaveState;

/* BEGIN MISC. USER-DEFINED CODE */

/* END MISC. USER-DEFINED CODE */

/**
* Multiplies all samples of the incoming
* signal, whatever it may be.
*/
class MultiplyController: public AtomController, public AutomatedControl::Listener {
private:
	/* BEGIN AUTO-GENERATED MEMBERS */
	AtomKnob m_fac11;
	DVecIter m_fac11Iter;
	AtomKnob m_fac01;
	DVecIter m_fac01Iter;
	/* END AUTO-GENERATED MEMBERS */

	/* BEGIN USER-DEFINED MEMBERS */

	/* END USER-DEFINED MEMBERS */
public:
	/* BEGIN AUTO-GENERATED METHODS */
	MultiplyController();
	virtual AtomController * createNewInstance() {
		return new MultiplyController();
	}
	virtual ~MultiplyController() {
	}

	virtual Atom * createAtom(int index);
	virtual std::string getCategory() {
		return "Debug";
	}
	virtual std::string getName() {
		return "Multiply";
	}
	virtual void loadSaveState(SaveState state);
	virtual SaveState saveSaveState();
	/* END AUTO-GENERATED METHODS */

	/* BEGIN AUTO-GENERATED LISTENERS */
	/** Listener function. */
	virtual void automatedControlChanged(AutomatedControl * control, bool byUser);
	/* END AUTO-GENERATED LISTENERS */

	/* BEGIN USER-DEFINED METHODS */

	/* END USER-DEFINED METHODS */

	friend class MultiplyAtom;
};

/**
* See MultiplyController.
*/
class MultiplyAtom: public Atom {
private:
	/* BEGIN AUTO-GENERATED MEMBERS */
	MultiplyController & m_parent;
	/* END AUTO-GENERATED MEMBERS */

	/* BEGIN USER-DEFINED MEMBERS */

	/* END USER-DEFINED MEMBERS */
public:
	/* BEGIN AUTO-GENERATED METHODS */
	/** Constructor which stores a more specific reference to the parent */
	MultiplyAtom(MultiplyController & parent, int index);
	virtual ~MultiplyAtom() {
	}
	virtual void execute();
	virtual void reset();
	/* END AUTO-GENERATED METHODS */

	/* BEGIN USER-DEFINED METHODS */

	/* END USER-DEFINED METHODS */

	friend class MultiplyController;
};

} /* namespace AtomSynth */

#endif /*  ATOM_Multiply_HEADER */

